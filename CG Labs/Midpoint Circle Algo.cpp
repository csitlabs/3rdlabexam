#include <stdio.h>
#include <graphics.h>
#include <dos.h>

int main() {
    int x, y, x_mid, y_mid, radius, dp;
    int gd = DETECT, gm;

    printf("MID POINT Circle Drawing Algorithm\n\n");
    printf("Enter the coordinates of center: ");
    scanf("%d %d", &x_mid, &y_mid);
    printf("Enter the radius: ");
    scanf("%d", &radius);

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    x = 0;
    y = radius;
    dp = 1 - radius;

    while (x <= y) {
        putpixel(x_mid + x, y_mid + y, YELLOW);
        putpixel(x_mid + y, y_mid + x, YELLOW);
        putpixel(x_mid - y, y_mid + x, YELLOW);
        putpixel(x_mid - x, y_mid + y, YELLOW);
        putpixel(x_mid - x, y_mid - y, YELLOW);
        putpixel(x_mid - y, y_mid - x, YELLOW);
        putpixel(x_mid + y, y_mid - x, YELLOW);
        putpixel(x_mid + x, y_mid - y, YELLOW);

        if (dp < 0) {
            dp += (2 * x) + 1;
        } else {
            dp += (2 * x) - (2 * y) + 1;
            y = y - 1;
        }
        x = x + 1;
    }

    getch();
    closegraph();

    return 0;
}


/* Inputs: 
Enter the coordinates of center:
Enter the radius: 50
100 125
*/
