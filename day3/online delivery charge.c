int main() {
    int order;
    int speedtype;
    scanf("%d\n%d",&order,&speedtype);
 

    switch(speedtype) {
        case 1:
            int order1=50;
            printf("Delivery:Rs %d",order1);
            break;

        case 2:
            int order2=100;
            if(order<1000) {
                printf("Delivery:Rs %d",order2);
            }
            else {
                printf("Free");
            }
            break;
    }
    return 0;
}