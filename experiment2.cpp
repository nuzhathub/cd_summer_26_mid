#include <iostream>
using namespace std;

bool checkConstant(string token){

    if(token.empty()){
        return false;
    }

    for(int i=0;i<token.length();i++){

        if(token[i]!='0' && token[i]!='1' && token[i]!='2' && token[i]!='3' &&
           token[i]!='4' && token[i]!='5' && token[i]!='6' && token[i]!='7' &&
           token[i]!='8' && token[i]!='9' && token[i]!='.'){

            return false;
        }
    }
    return true;
}

void lexicalAnalyzer(string inputLine){

    string reservedWords[3]={"cout","endl","int"};
    string operators[3]={"+","<<","/"};
    string punctuators[3]={";","+","/"};
    string tokenList[100];
    int index=0;
    string currentToken;

    for(int i=0;i<inputLine.length();i++){

        if(inputLine[i] != ' '){

            currentToken += inputLine[i];
        }

        if(inputLine[i]==' ' || i==(inputLine.length()-1)){

            if(checkConstant(currentToken)){

                tokenList[index]=currentToken;
                index++;
                currentToken="";
            }

            for(int j=0;j<3;j++){

                if(currentToken==reservedWords[j]){

                    tokenList[index]=currentToken;
                    index++;
                    currentToken="";
                }
                else if(currentToken==operators[j]){

                    tokenList[index]=currentToken;
                    index++;
                    currentToken="";
                }
                else if(currentToken==punctuators[j]){

                    tokenList[index]=currentToken;
                    index++;
                    currentToken="";
                }
            }

            currentToken="";
        }
    }

    for(int i=0;i<index;i++){

        if(checkConstant(tokenList[i])){

            cout<<tokenList[i]<<" -> Numeric Constant"<<endl;
        }
        else{

            cout<<tokenList[i]<<" -> Valid Token"<<endl;
        }
    }
}

int main(){

    lexicalAnalyzer("cout << 60 + 20.5 << << endl ;");
}