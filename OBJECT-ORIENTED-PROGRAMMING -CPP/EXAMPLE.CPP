#include <stdio.h>
#include <math.h> // For round() and fabs()

// Function to implement the DDA algorithm
void DDA(int x1, int y1, int x2, int y2)
{
    // Calculate dx and dy
    float dx = x2 - x1;
    float dy = y2 - y1;

    // Determine the number of steps
    int steps = (fabs(dx) > fabs(dy)) ? fabs(dx) : fabs(dy);

    // Calculate the increments for x and y
    float xIncrement = dx / steps;
    float yIncrement = dy / steps;

    // Initialize starting point
    float x = x1;
    float y = y1;

    // Print the starting point
    printf("Step-wise points:\n");
    printf("(%d, %d)\n", (int)round(x), (int)round(y));

    // Use a for loop to calculate and print the intermediate points
    for (int i = 0; i < steps; i++)
    {
        x += xIncrement;
        y += yIncrement;
        printf("(%d, %d)\n", (int)round(x), (int)round(y));
    }
}

int main()
{
    int x1, y1, x2, y2;

    // Input the coordinates of the two points
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    // Call the DDA function to draw the line
    DDA(x1, y1, x2, y2);

    return 0;
}
