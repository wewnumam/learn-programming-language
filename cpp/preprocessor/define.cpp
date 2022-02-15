#define PI 3.14159
#define MIN(a,b) (((a)<(b)) ? a : b)

int main()
{
    double pi = PI;
    int i = 100;
    int j = 30;
    bool min = MIN(i, j);
    
    return 0;
}