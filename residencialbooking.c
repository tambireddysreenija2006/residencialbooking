#include <stdio.h>
int ordinary(int stay) {
    int room_cost = 2000;
    int gst = room_cost * 0.18;
    int totalcost = stay * room_cost + gst * stay; 
    return totalcost;
}
int deluxe(int stay) {
    int room_cost = 5000;
    int gst = room_cost * 0.18; 
    int totalcost = stay * room_cost + gst * stay;  
    return totalcost;
}
int super_deluxe(int stay) {
    int room_cost = 7000;
    int gst = room_cost * 0.18; 
    int totalcost = stay * room_cost + gst * stay;
    return totalcost;
}

int main() {
    char name[10];
    int option, stay;int gst;

    printf("Enter name:\n");
    scanf("%s", name);
    printf("Select the options below:\n");
    printf("1. Ordinary room: 2000 per day\n");
    printf("2. Deluxe room: 5000 per day\n");
    printf("3. Super Deluxe room: 7000 per day\n");
    printf("Enter the option number:\n");
    scanf("%d", &option);
    printf("Enter how many days you want to stay:\n");
    scanf("%d", &stay);

    int totalcost = 0;
    if (option == 1) {
        totalcost = ordinary(stay);
    } else if (option == 2) {
        totalcost = deluxe(stay);
    } else if (option == 3) {
        totalcost = super_deluxe(stay);
    } else {
        printf("Invalid option selected.\n");
        return 1;
    }
    printf("********TAJ RESIDENCY********\n");
    printf("The room booked by %s\n",name);
    printf("The room booked for %d days\n",stay);
    printf("Total cost  is %d:\n",totalcost);
    printf("Thank you Visit Again\n");
    
    return 0;
}

