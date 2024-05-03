THIS IS A PROJECT SET TO WORK ON THE NEED TO HELP THE FARMERS SOLVE THE DIFFICULTY OF GEETING TO KNOW THE MSP FOR THEIR CROP YIELD BY TAKING SOME VALUES AS INPUTS AND THERE IS AN ADD ON  WHICH SUGGESTS SOME PEST CONTROL METHODS IF REQUIRED


TOPIC: Integrating Crop Yield Prediction, MSP Forecast, and Pest 
Control Recommendations 
IDEA IN BRIEF: 
THE MAIN IDEA OF THIS PROJECT IS TO HELP THE FARMERS OF INDIA KNOW THE 
MSP(MINIMUM SUPPORT PRICE ) ,CROP YIELD OF THEIR CROP AND HOW TO PROTECT IT 
FROMN THE PESTS  THROUGH   A C LANGUAGE BASED PROJECT BASED ON   WEB/APP 
DEVELOPMENT. 
IDEA IN EXPALNATION: 
THIS PROJECT CONSISTS OF THREE PARTS: 
1. THE INFORMATION GATHERED FROM VARIOUS RESOURCES ABOUT THE CROP 
YIELDING MEASURE AND HOW TO PREDICT IT FOR THE FUTURE WITH THE HELP 
OF DATA   SOURCES. 
2. THE NEXT PART CONSITS OF HAVING TECH BASED FORMAT FOR IT. 
3. LAST PARTS CONSISTS OF REFERENCES THAT HELPED MAKING THIS PROJECT 
 
  
CROP TYPE               YIELD PER 100 GR1M 
Canola                           4.0                            
Wheat                            3.4 
Lentils                            3.0 
Safflower 
Oats and triticale 
Barley 
Lupin (narrow leaf) 
Chickpea (desi) 
Field pea 
Lupin (broad leaf) 
Chickpea(kabuli) 
Faba bean  C 
      
INFORMATION GATHERING PART 
 
• FIRST, WE NEED TO KNOW THE METHOD BY WHICH WE CAN FIND THE CROP 
YIELD    
 
There are many methods available for farmers and others to estimate yield of various 
crops. Some are straightforward whereas others are more complicated. The method 
presented here is one that can be undertaken relatively quickly and easily. 
Steps are as follows: 
1. Select an area that is representative of the paddock. Using some type of measuring 
rod or tape, measure out an area of 1m2 and count the number of heads or pods. 
2. Do this 5 times to get an average of the crop (A) 
3. Count the number of grains in at least 20 heads or pods and average (B) 
4. Using Table 1 determine the grain weight for the crop concerned (C) 
5. Yield in t/ha = (A × B × C) / 10,000 
For example, to calculate a wheat yield where: 
• Average number of heads/pods per m2 is 220 (A) 
• Average number of grains per head/pod is 24 (B) 
• Weight of 100 grains of wheat is 3.4g (per Table 1) (C) 
Yield in t/ha = (220 × 24 × 3.4) / 10,000 = 1.79 
Accuracy of yield estimates depends upon an adequate number of counts being taken so as 
to get a representative average of the paddock. The yield estimate determined will only be 
a guide and assumptions made from the estimates contain a degree of uncertainty. 
This type of yield estimation is one of the easiest and quickest to complete and should be 
able to be used in a number of situations on a grain growing property. Grain losses both 
before and during harvest can be significant and an allowance for 5 to 10% loss should be 
included in your final calculations. 
Table 1. Grain weights expressed as weight per 100 grains. 
MSP is the minimum price at which the government procures crops from farmers. 
The actual amount depends on the method used to calculate cost of production 
(CoP). Fixing MSP based on the Swaminathan report has been a long demand of 
farmer groups and was a major demand during the year-long farmers' protest in 
2021-22. 
The government maintains that the MSP was fixed at a level of at least 1.5 times of 
the all-India weighted average CoP, but it calculates this cost as 1.5 times of A2+FL. 
Below is the projected cost of production for the Rabi Marketing Season (RMS) 2024
25 for different crops based on A2+FL and C2 formulae. 
The government bases its announcement on the recommendations given by 
the Commission for Agricultural Costs & Prices (CACP), which details three major 
formulae to arrive at MSP. These are: 
A2: Costs incurred by the farmer in production of a particular crop. It includes several 
inputs such as expenditure on seeds, fertilisers, pesticides, leased-in land, hired 
labour, machinery and fuel 
A2+FL: Costs incurred by the farmer and the value of family labour 
C2: A comprehensive cost, which is A2+FL cost plus imputed rental value of owned 
land plus interest on fixed capital, rent paid for leased-in land 
msp_c2_plus_50= c2 + 0.5 * c2 
msp_a2fl_times_15  = 1.5 * (a2 + fl); 
if ( msp_c2_plus_50>= c2)  
MSP = C2 + 50%% C2  
else if  (msp_a2fl_times_15 >= c2) { 
MSP= 1.5 * A2 + FL  
PEST CONTROL 
When people hear the terms “pest management” or “pest control”, they are typically thinking about 
the eradication of rats, mice, insects etc 
•  
Weeds are invasive plants that take nutrients, water, and space from the 
desired crops. 
• Locusts are probably the most dangerous of all agriculture pests. Small in stature, these 
insects can eat their bodyweight in crops in a day and often swarm in the millions. Locust 
swarms have devastated agricultural land for centuries. 
• Aphids and whiteflies feed on the sap of plants meaning they lack nutrients to build other 
plant structures. They also feed on the flowers and carry dangerous diseases and viruses. 
• Colorado potato beetles get their names from their love for potatoes, but these insects will 
feed on various vegetation. They are most dangerous because of their innate ability to 
evolve resistance to many different pesticides quickly. 
• Corn rootworms, as the name suggests, feed on the roots of corn in their larval stage. This 
reduces the ability of the roots to absorb water, and yield decreases. 
CODE EXPLANATION 
1. Header Files and Constants: 
cCopy code 
#include <stdio.h> #include <string.h>  
These lines include the necessary header files for input and output operations (stdio.h) and string 
manipulation (string.h). Additionally, constants for grain weights and crop types are defined. 
cCopy code 
const double grain_weights[] = { /* ... */ }; const char* crop_types[] = { /* ... */ };  
Two arrays are defined: grain_weights holds the weights of different crops, and crop_types 
contains the names of corresponding crops. 
2. calculate_yield function: 
cCopy code 
double calculate_yield(char crop_type[], int area_samples, int heads_per_m2_sum, int 
grains_per_head_sum) { /* ... */ }  
This function takes input parameters related to a specific crop and calculates the estimated yield in 
tons per hectare based on the provided information and predefined grain weights. 
3. predictYield function: 
cCopy code 
float predictYield(char* location, char* plantingDate) { /* ... */ }  
This function prompts the user for input related to a crop (type, area samples, heads per square 
meter, grains per head) and calls calculate_yield to predict the crop yield. It then prints the 
estimated yield for the specified location. 
4. estimateMSP function: 
cCopy code 
float estimateMSP(char* crop) { /* ... */ }  
The function takes user input for different cost components related to crop production (A2, FL, C2) 
and calculates and compares two different MSPs. It then prints the results and whether either 
formula covers the production cost. 
5. recommendPestControl function: 
cCopy code 
void recommendPestControl(char* location, char* weatherData) { /* ... */ }  
This function simulates a knowledge base of common pests and their preferred weather conditions. 
It analyzes the provided weather data and suggests pest control measures based on potential risks. 
6. main function: 
cCopy code 
int main() { /* ... */ }  
The main function presents a menu to the user with options to predict crop yield, estimate MSP, 
recommend pest control measures, or exit. It uses a do-while loop to repeatedly prompt the user 
until they choose to exit. 
Inside the loop, a switch statement directs the program to the corresponding functionality based on 
the user's choice. 
cCopy code 
switch (choice) { case 1: // Predict Crop Yield predictYield(location, plantingDate); break; case 2: 
// Estimate Minimum Support Price estimateMSP(crop); break; case 3: // Recommend Pest Control 
Measures recommendPestControl(location, weatherData); break; case 4: // Exit 
printf("Exiting...\n"); break; default: // Invalid choice printf("Invalid choice. Please try again.\n"); }  
The program continues to loop until the user chooses to exit (option 4). 
Overall, the code is a comprehensive agricultural management program that covers crop yield 
prediction, cost estimation, and pest control recommendations. It interacts with the user through a 
menu-driven interface, utilizing functions for specific tasks. 
COMPLETE CODE 
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
const char* crop_types[] = {"Canola", "Wheat", "Lentils (minimum)", "Lentils (maximum)", 
"Safflower", "Oats and Triticale", "Barley", "Lupin (narrow leaf)", "Chickpea (desi)", "Field pea", 
"Lupin (broad leaf)", "Chickpea (kabuli)", "Faba bean"}; 
// Function to calculate crop yield 
double calculate_yield(char crop_type[], int area_samples, int heads_per_m2_sum, int 
grains_per_head_sum) { 
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
    double yield = calculate_yield(crop_type, area_samples, heads_per_m2_sum, 
grains_per_head_sum); 
 
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
    const char* pest_weather[] = {"Warm and humid", "Moderate temperature", "Warm and dry", 
"Hot and dry"}; 
 
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
 ![image](https://github.com/Tanish-agupta/agri-calculator/assets/148575483/92a46da1-0039-4122-af72-61dbf3e549b8)
