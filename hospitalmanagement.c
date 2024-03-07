//Hospital Management system
#include<stdio.h>
int main() {
    int age, op, ph_no;
    char name[20], ch;  
    printf("--HOSPITAL MANAGEMENT--\n");
    printf("Patient name: ");
    scanf("%s", name);  
    printf("Enter your mobile number: ");
    scanf("%d", &ph_no); 
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Which specialist do you need?\n");
    printf("Available specialists:\n1. Cardiologist\n2. Neurologist\n3. Physiotherapist");
    printf("\nChoose your specialist: ");
    scanf("%d", &op); 
    if(op == 1) {
        printf("Selected Cardiologist\n");
        printf("Available doctors:\n");
        printf("1. DR.S.Akshay MBBS, MS ICL\nPhone no: 966666222\nExperience: 10 years\nRoom no: 206\nAvailability: Yes\n");
        printf("\n2. DR.R.Akash MBBS, DO, CATARACT\nPhone no: 9087654321\nExperience: 15 years\nRoom no: 208\nAvailability: NO\n");
        printf("\n3. DR.M.Mukesh MBBS, MS, Sr. VETERIO\nPhone no: 908767890\nExperience: 12 years\nRoom no: 210\nAvailability: Yes\n");
        printf("Choose doctor: ");
        scanf("%d", &op);
        if(op == 1) {
            printf("You selected DR.S.Akshay");
            printf("Dear %s, your consultancy fee is Rs.2000. Pay the fee to proceed with your appointment.\n", name);
        } else if(op == 2) {
            printf("You selected DR.R.Akash");
            printf("DR is currently not available");
            printf("Do you want to book an appointment tomorrow?\n1. Yes\n2. No");
            printf("Enter your option: ");
            scanf(" %c", &ch);
            if(ch == 'y' || ch == '1') {
                printf("Hello %s, your appointment is booked tomorrow with DR.R.Akash at 10:00 AM", name);
                printf("Your consultancy fee is Rs.2000. Pay the fee to proceed with your appointment.\n");
            } else if(ch == 'n' || ch == '2') {
                printf("Available doctors:\n");
                printf("1. DR.S.Akshay MBBS, MS ICL\nPhone no: 966666222\nExperience: 10 years\nRoom no: 206\nAvailability: Yes");
                printf("2. DR.M.Mukesh MBBS, MS, Sr. VETERIO S\nPhone no: 908767890\nExperience: 12 years\nRoom no: 210\nAvailability: Yes");
                
                printf("Select available doctor: ");
                scanf("%d", &op);  
                if(op == 1) {
                    printf("You selected DR.S.Akshay");
                    printf("Dear %s, your consultancy fee is Rs.2000. Pay the fee to proceed with your appointment.\n", name);
                } else if(op == 2) {
                    printf("You selected DR.M.Mukesh");
                    printf("Dear %s, your consultancy fee is Rs.2000. Pay the fee to proceed with your appointment.\n", name);
                }
            }
        }
    } else if(op == 2) {
        printf("Selected Neurologist");
        printf("Neurologist is not available");
        printf("Schedule of Neurologist is MON-TUES");
    } else if(op == 3) {
        printf("Selected Physiotherapist");
        printf("Physiotherapist is not available");
        printf("Schedule of Physiotherapist is WED-FRI");
    }
    return 0;
}
