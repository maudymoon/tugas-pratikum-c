#include <stdio.h>

int main() {
    // Mencetak deret 1 hingga 1024 dengan menggandakan nilai sebelumnya
    int nilai = 1;
    for (int i = 0; i < 11; ++i) {
        printf("%d ", nilai);
        nilai *= 2;
    }

    return 0;
}
