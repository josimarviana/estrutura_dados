#include <iostream>
#include <list>
using std::cout;
using std::endl;
using std::string;

int main(int argc, char ** argv){
    std::list<string> nomes;
    std::list<string> ::iterator i;

    nomes.push_back("João");
    nomes.push_back("Maria");
    nomes.push_back("José");

    for (i = nomes.begin(); i != nomes.end(); i++){
        cout <<  *i << endl;
    }

    return 0;

}