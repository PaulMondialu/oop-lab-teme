#include <iostream>


int prim(int x) {
    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;

}

void Twins(int n) {
    for (int i = 2; i <= n; i++) {
        for (int j = i+1; j <= n; j++) {
            if (prim(j) == 1 && prim(i) == 1 && abs(j - i) == 2) {
                std::cout << i << " " << j << std::endl;
            }
        }
    }
}
void Abnehmend(int v[], int l) {
   // std::cout << l << std::endl;
    int ct = 1, inc = 0, inc2 = 0, fin2 = 0, fin = 0;
    int maxi = -1;

    for (int i = 0; i < l; i++) {
        ct = 1;
        inc = i;
        fin = i;

        while (i + 1 < l && v[i] > v[i + 1]) {
            ct++;
            fin = i + 1;
            i++;
        }

        if (ct > maxi) {
            inc2 = inc;
            maxi = ct;
            fin2 = fin;
        }
    }

    //std::cout << inc2 << " " << fin2 << std::endl;
    for (int i = inc2; i <= fin2; i++) {
        std::cout << v[i] << " ";
    }
}

int main() {
    int v[] = {19, 18, 17, 15, 20, 21, 9, 8, 7, 6, 5, 4, 20};
    Abnehmend(v, 13);
}