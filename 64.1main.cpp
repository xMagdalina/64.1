#include <iostream>
#include <fstream>
using namespace std;
class fol {     
    public:
    ifstream pl1;
    ofstream pl2;
    string obrazek;
    string ciag;
    void plik();
    void szukaj();
};
void fol::szukaj() {
int jeden = 0;
int dwa = 0;
int trzy = 0;
pl1.open("obrazki.txt");
pl2.open("wy.txt");
while(!pl1.eof()){
pl1>>ciag;
if (ciag.length() == 21) {
for( int i = 0; i < ciag.length()-1; i++ ) {
obrazek += ciag[i];
}
}
else {
    for( int i = 0; i < obrazek.length(); i++ ) {
if (obrazek[i] == '0') {
    jeden++;
    }
}
dwa = obrazek.length() - jeden;
if (dwa > jeden) {
trzy++;
}        
obrazek = "";
jeden = 0;
}
    }
cout<<trzy<<endl;
}
int main(int argc, char** argv) {
fol dd;
dd.szukaj();
    return 0;
}
