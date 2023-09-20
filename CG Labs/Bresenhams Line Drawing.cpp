#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main() {
    int x, y, x1, y1, x2, y2, p, dx, dy;
    int gd = DETECT, gm;
    
    printf("Bresenham's Line Drawing Algorithm\n\n");
    printf("Enter the x & y-coordinate of the first point: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the x & y-coordinate of the second point: ");
    scanf("%d %d", &x2, &y2);
    
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    
    x = x1;
    y = y1;
    dx = x2 - x1;
    dy = y2 - y1;
    
    putpixel(x, y, 2);
    
    p = (2 * dy - dx);
    
    while (x <= x2) {
        x++;
        
        if (p < 0)
            p = p + 2 * dy;
        else
            p = p + (2 * dy) - (2 * dx);
            
        putpixel(x, y, 7);
    }
    
    getch();
    closegraph();
    
    return 0;
}

/* Inputs: 100 200 300 400 */
