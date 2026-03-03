#include <iostream>
#include <vector>

int prim(int x) {
    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;

}
void PrimN(int n) {
    for (int i = 2; i <= n; i++) {
        if (prim(i) == 1) {
            std::cout << i << std::endl;
        }
    }



}

int cmmdc(int a,int b) {


    while(a != b) {
        if(a > b) a = a - b;
        else b = b - a;
    }
    return a;


}
void RelativPrim(std::vector<int> numere) {
    int inc=0,inc2=0;
    int fin=0,fin2=0;
    int maxl=INT_MIN;
    for (int i = 0; i <numere.size(); i++) {
        if (cmmdc(numere[i],numere[i+1])==1 ) {
            inc=i;
            fin=i;
            i++;
            while (cmmdc(numere[i],numere[i+1])==1) {
                fin=i;
                i++;
            }
            if (fin-inc > maxl) {
                maxl=fin-inc;
                inc2=inc;
                fin2=fin;
            }
        }
    }
    for (int i = inc2; i <=fin2; i++) {
        std::cout << numere[i] << std::endl;
    }

}
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    //PrimN(100);
    std::vector<int> lista={15, 28, 14, 21, 10, 33, 35, 12};
    RelativPrim(lista);
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}
