//Scrieţi un program care adună de n ori x şi de n ori y.
//Se vor afişa la fiecare n/10 termeni calculaţi sumele parţiale şi se vor folosi ambele formate de afişare:
//%f şi %e.

int main() {
    int n;
    float x;
    double y;

    scanf("%d %f %lf", &n, &x, &y);

    float partial_sum_x = 0;
    double partial_sum_y = 0;

    for (int i = 1; i < n; i++) {
        partial_sum_x = partial_sum_x + x;
        partial_sum_y = partial_sum_y + y;
        if(i % (n / 10) == 0) {
            printf("%f %e %f %e\n", partial_sum_x, partial_sum_y, partial_sum_x, partial_sum_y);
        }
    }

    return 0;
}
