#include <iostream>

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
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    PrimN(10);
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}