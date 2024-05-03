#include <stdio.h>
#include <string.h>

const double grain_weights[] = {
    0.4,  // Canola
    3.4,  // Wheat
    3.0,  // Lentils (minimum)
    5.0,  // Lentils (maximum)
    3.8,  // Safflower
    4.0,  // Oats and Triticale
    4.2,  // Barley
    16.0, // Lupin (narrow leaf)
    18.0, // Chickpea (desi)
    20.0, // Field pea
    30.0, // Lupin (broad leaf)
    40.0, // Chickpea (kabuli)
    50.0  // Faba bean
};

const char* crop_types[] = {"Canola", "Wheat", "Lentils (minimum)", "Lentils (maximum)", "Safflower", "Oats and Triticale", "Barley", "Lupin (narrow leaf)", "Chickpea (desi)", "Field pea", "Lupin (broad leaf)", "Chickpea (kabuli)", "Faba bean"};

// Function to calculate crop yield
double calculate_yield(char crop_type[], int area_samples, int heads_per_m2_sum, int grains_per_head_sum) {
    // Find the index of the crop in the grain weights table
    int crop_index = -1;
    int i;
    for (i = 0; i < sizeof(grain_weights) / sizeof(grain_weights[0]); i++) {
        if (strcmp(crop_type, crop_types[i]) == 0) {
            crop_index = i;
            break;
        }
    }

    // Check if crop type is found
    if (crop_index == -1) {
        printf("Error: Unknown crop type '%s'\n", crop_type);
        return -1.0;
    }

    // Calculate average heads per square meter
    double avg_heads_per_m2 = (double)heads_per_m2_sum / area_samples;

    // Calculate average grains per head
    double avg_grains_per_head = (double)grains_per_head_sum / area_samples;

    // Get grain weight from table
    double grain_weight = grain_weights[crop_index];

    // Calculate yield in tons per hectare
    double yield = (avg_heads_per_m2 * avg_grains_per_head * grain_weight) / 10000;

    return yield;
}

// Function to predict crop yield based on location and planting date
float predictYield(char* location, char* plantingDate) {
    char crop_type[50];
    int area_samples, heads_per_m2_sum, grains_per_head_sum;

    // Get user input
    printf("Enter crop type: ");
    scanf("%s", crop_type);
    printf("Enter number of area samples: ");
    scanf("%d", &area_samples);
    printf("Enter sum of heads per square meter across samples: ");
    scanf("%d", &heads_per_m2_sum);
    printf("Enter sum of grains per head across samples: ");
    scanf("%d", &grains_per_head_sum);

    // Calculate yield
    double yield = calculate_yield(crop_type, area_samples, heads_per_m2_sum, grains_per_head_sum);

    // Print result
    if (yield > 0.0) {
        printf("Estimated yield for %s in %s: %.2f tons per hectare\n", crop_type, location, yield);
    } else {
        printf("Error calculating yield\n");
    }

    return yield; // return the calculated yield
}

// Function to estimate minimum support price for a given crop
float estimateMSP(char* crop) {
    int a2, fl, c2;

    // Get input for costs
    printf("Enter A2 cost (out-of-pocket expenses): ");
    scanf("%d", &a2);
    printf("Enter FL cost (estimated value of unpaid labor): ");
    scanf("%d", &fl);
    printf("Enter C2 cost (comprehensive cost): ");
    scanf("%d", &c2);

    // Calculate MSPs
    float msp_c2_plus_50 = c2 + 0.5 * c2;
    float msp_a2fl_times_15 = 1.5 * (a2 + fl);

    // Compare MSPs and production cost
    printf("\nMSP based on C2 + 50%% C2: %.2f\n", msp_c2_plus_50);
    printf("MSP based on 1.5 times A2 + FL: %.2f\n", msp_a2fl_times_15);

    if (msp_c2_plus_50 >= c2) {
        printf("MSP based on C2 + 50%% C2 covers production cost.\n");
    } else if (msp_a2fl_times_15 >= c2) {
        printf("MSP based on 1.5 times A2 + FL covers production cost.\n");
    } else {
        printf("Neither formula fully covers production cost.\n");
    }

    return 0; // return a value, change if necessary
}

// Function to recommend pest control measures based on location and weather data
void recommendPestControl(char* location, char* weatherData) {
    // Simulated knowledge base of common pests and their preferred weather conditions
    const char* pests[] = {"Aphids", "Caterpillars", "Whiteflies", "Spider Mites"};
    const char* pest_weather[] = {"Warm and humid", "Moderate temperature", "Warm and dry", "Hot and dry"};

    // Analyze weather data and location-specific factors
    printf("Analyzing weather data for location: %s\n", location);
    printf("Weather conditions: %s\n", weatherData);

    // Check for potential pest risks based on weather
    int i;
    int pest_found = 0;
    for (i = 0; i < sizeof(pests) / sizeof(pests[0]); i++) {
        if (strstr(weatherData, pest_weather[i]) != NULL) {
            printf("Potential risk of %s infestation.\n", pests[i]);
            pest_found = 1;
            // Additional checks and analysis can be added here
        }
    }

    // Recommend suitable pest control measures based on the analysis
    if (pest_found) {
        printf("Recommendations:\n");
        printf("- Use insecticidal soap for Aphids.\n");
        printf("- Apply Bacillus thuringiensis (Bt) for Caterpillars.\n");
        printf("- Introduce natural predators for Whiteflies.\n");
        printf("- Use miticides for Spider Mites.\n");
    } else {
        printf("No significant pest risks detected based on the current weather conditions.\n");
    }
}

int main() {
    int choice;
    char location[100];
    char plantingDate[100];
    char crop[100];
    char weatherData[100];

    do {
        printf("Menu:\n");
        printf("1. Predict Crop Yield\n");
        printf("2. Estimate Minimum Support Price\n");
        printf("3. Recommend Pest Control Measures\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: 
        
            predictYield(location, plantingDate);
            break;
        case 2:
            printf("Enter crop: ");
            scanf("%s", crop);
            estimateMSP(crop);
            break;
        case 3:
            printf("Enter location: ");
            scanf("%s", location);
            printf("Enter weather data: ");
            scanf("%s", weatherData);
            recommendPestControl(location, weatherData);
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}


