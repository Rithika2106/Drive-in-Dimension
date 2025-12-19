#include <stdio.h>

/* Function to input vehicle dimensions */
void getVehicleDimensions(float *h, float *w, float *l)
{
    printf("\n--- Enter Vehicle Dimensions ---\n");
    printf("Height (meters): ");
    scanf("%f", h);

    printf("Width (meters): ");
    scanf("%f", w);

    printf("Length (meters): ");
    scanf("%f", l);
}

/* Function to input drive-through limits */
void getDriveThroughLimits(float *mh, float *mw, float *ml)
{
    printf("\n--- Enter Drive-Through Maximum Limits ---\n");
    printf("Maximum Height (meters): ");
    scanf("%f", mh);

    printf("Maximum Width (meters): ");
    scanf("%f", mw);

    printf("Maximum Length (meters): ");
    scanf("%f", ml);
}

/* Function to display dimensions */
void displayDimensions(float *h, float *w, float *l,
                       float *mh, float *mw, float *ml)
{
    printf("\n--- Dimension Summary ---\n");
    printf("Vehicle Height : %.2f m\n", *h);
    printf("Vehicle Width  : %.2f m\n", *w);
    printf("Vehicle Length : %.2f m\n", *l);

    printf("\nAllowed Height : %.2f m\n", *mh);
    printf("Allowed Width  : %.2f m\n", *mw);
    printf("Allowed Length : %.2f m\n", *ml);
}

/* Function to check eligibility */
void checkEligibility(float *h, float *w, float *l,
                      float *mh, float *mw, float *ml)
{
    int flag = 1;

    printf("\n--- Drive-Through Result ---\n");

    if (*h > *mh)
    {
        printf("❌ Height exceeds limit.\n");
        flag = 0;
    }
    if (*w > *mw)
    {
        printf("❌ Width exceeds limit.\n");
        flag = 0;
    }
    if (*l > *ml)
    {
        printf("❌ Length exceeds limit.\n");
        flag = 0;
    }

    if (flag)
    {
        printf("✅ Vehicle is ELIGIBLE for drive-through access.\n");
    }
    else
    {
        printf("❌ Vehicle is NOT eligible for drive-through access.\n");
    }
}

int main()
{
    float vHeight, vWidth, vLength;
    float maxHeight, maxWidth, maxLength;

    printf("========================================\n");
    printf("   DRIVE-THROUGH DIMENSION CHECK SYSTEM  \n");
    printf("========================================\n");

    /* Input section */
    getVehicleDimensions(&vHeight, &vWidth, &vLength);
    getDriveThroughLimits(&maxHeight, &maxWidth, &maxLength);

    /* Display section */
    displayDimensions(&vHeight, &vWidth, &vLength,
                      &maxHeight, &maxWidth, &maxLength);

    /* Processing section */
    checkEligibility(&vHeight, &vWidth, &vLength,
                     &maxHeight, &maxWidth, &maxLength);

    printf("\nThank you for using the system.\n");

    return 0;
}
