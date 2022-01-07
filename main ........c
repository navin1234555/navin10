

    #include <stdio.h>
union book{
 char name[20];
 char fuel[20];
 char type[20];
 int price;
 char comp[20];
};
int main()
{
    union book b1,b2,b3,b4,b5;
    int id,bn,n,i;
    char colour[20],booking[20];
    str:printf("\t\tWELCOME TO SRM SHOWROOM\n\n");
    printf("which brand are you interested in:\n1-Hyundai\n2-Toyota\n3-KIA\n4-would you like to add new car information\n\nselect by typing the respective no.\n");
    scanf("%d",&bn);
    switch(bn)
    {
        case 1:
        printf("\n\n\n\tHYUNDAI\n\nbooking id:11\ncreta\nfuel: petrol\ntype: SUV\nprice:₹ 10.22 Lakh onwards\n\nbooking id:12\nTucson\nfuel: petrol\ntype: SUV\nprice:₹ 22.7 lakhs onwards\n\nbooking id:13\nElantra\nfuel: petrol\ntype: sedan\nprice:₹ 17.8 lakhs onwards\n\nbooking id:14\nxcent\nfuel: petrol\ntype: sedan\nprice:₹ 5.8 lakhs onwards\n\nbooking id:15\nSanta Fe\nfuel: diesel\ntype: SUV\nprice:₹ 27.9 lakhs onwards\n\n");
        break;
        case 2:
        printf("\n\n\n\tTOYOTA\n\nbooking id:21\ncamry\nfuel: petrol\ntype: sedan\nprice:₹ 41.2 Lakh onwards\n\nbooking id:22\nAvalon\nfuel: gasoline\ntype: sedan\nprice:$36,275 onwards\n\nbooking id:23\nHighlander\nfuel: gasoline\ntype: SUV\nprice: $35,205 onwards\n\nbooking id:24\nSienna\nfuel: gasoline\ntype: Minivan\nprice:$34,560 onwards\n\nbooking id:25\nUrban Cruiser\nfuel: petrol\ntype: SUV\nprice:₹ 8.6 lakhs onwards\n\n");
        break;
        case 3:
        printf("\n\n\n\tKIA\n\nbooking id:31\nSeltos\nfuel: petrol\ntype: SUV\nprice:₹ 9.95 lakhs onwards\n\nbooking id:32\nSonet\nfuel: diesel\ntype: SUV\nprice:₹ 6.95 Lakhs onwards\n\nbooking id:33\nCarnival\nfuel: diesel\ntype: Minivan\nprice:₹ 25 lakhs onwards\n\nbooking id:34\ncarens\nfuel: petrol\ntype: MUV\nprice:₹ 14.5 lakhs onwards\n\nbooking id:35\nsportage\nfuel: gasoline\ntype: SUV\nprice:₹ 25 lakhs onwards\n\n");
        break;
        case 4:
        printf("\n\n\nhow many new car details would u like to add? (1-5)\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
             printf("Enter car%d details\n",i);
        printf("NAME:\n");
        scanf("%s",b1.name);
        printf("Company:\n");
        scanf("%s",b5.comp);
        printf("FUEL:\n");
        scanf("%s",b2.fuel);
        printf("TYPE:\n");
        scanf("%s",b3.type);
        printf("PRICE:\n");
        scanf("%d",&b4.price);
        printf("\n\t\tCAR DETAILS SUCCESSFULLY ADDED\ncar details are:\n");
        printf("NAME:%s\n",b1.name);
        printf("COMPANY:%s\n",b5.comp);
        printf("FUEL:%s\n",b2.fuel);
        printf("TYPE:%s\n",b3.type);
        printf("PRICE:%d\n\n\n",b4.price);
        }goto en;break;
        default:
        printf("Invalid entry\n");
        goto str;
        break;

    }
    printf("\n\t\tCAR BOOKING\n");
    printf("Enter the name of the booking\n");
    scanf("%s",booking);
    printf("choose the colour of your car\n");
    scanf("%s",colour);
     printf("Enter the booking id specified\n");
    scanf("%d",&id);
    switch(id)
    {
        case 11:
         printf("\t\tCAR SUCCESSFULLY BOOKED\nthe car details are:\nbooking name: %s\ncar name: creta\nfuel: petrol\ntype: SUV\nprice:₹ 10.22 Lakh\ncolour: %s\n",booking,colour);
         break;
         case 12:
         printf("\t\tCAR SUCCESSFULLY BOOKED\nthe car details are:\nbooking name: %s\ncar name: Tucson\nfuel: petrol\ntype: SUV\nprice:₹ 22.7 lakhs\ncolour: %s\n",booking,colour);
         break;
         case 13:
         printf("\t\tCAR SUCCESSFULLY BOOKED\nthe car details are:\nbooking name: %s\ncar name: Elantra\nfuel: petrol\ntype: sedan\nprice:₹ 17.8 lakhs\ncolour: %s\n",booking,colour);
         break;
         case 14:
         printf("\t\tCAR SUCCESSFULLY BOOKED\nthe car details are:\nbooking name: %s\ncar name: xcent\nfuel: petrol\ntype: sedan\nprice:₹ 5.8 lakhs\ncolour: %s\n",booking,colour);
         break;
         case 15:
         printf("\t\tCAR SUCCESSFULLY BOOKED\nthe car details are:\nbooking name: %s\ncar name: Santa Fe\nfuel: diesel\ntype: SUV\nprice:₹ 27.9 lakhs\ncolour: %s\n",booking,colour);
         break;
         case 21:
         printf("\t\tCAR SUCCESSFULLY BOOKED\nthe car details are:\nbooking name: %s\ncar name: camry\nfuel: petrol\ntype: sedan\nprice:₹ 41.2 Lakh\ncolour: %s\n",booking,colour);
         break;
         case 22:
         printf("\t\tCAR SUCCESSFULLY BOOKED\nthe car details are:\nbooking name: %s\ncar name: Avalon\nfuel: gasoline\ntype: sedan\nprice:$36,275\ncolour: %s\n",booking,colour);
         break;
         case 23:
         printf("\t\tCAR SUCCESSFULLY BOOKED\nthe car details are:\nbooking name: %s\ncar name: Highlander\nfuel: gasoline\ntype: SUV\nprice: $35,205\ncolour: %s\n",booking,colour);
         break;
         case 24:
         printf("\t\tCAR SUCCESSFULLY BOOKED\nthe car details are:\nbooking name: %s\ncar name: Sienna\nfuel: gasoline\ntype: Minivan\nprice:$34,560\ncolour: %s\n",booking,colour);
         break;
         case 25:
         printf("\t\tCAR SUCCESSFULLY BOOKED\nthe car details are:\nbooking name: %s\ncar name: Urban Cruiser\nfuel: petrol\ntype: SUV\nprice:₹ 8.6 lakhs\ncolour: %s\n",booking,colour);
         break;
         case 31:
         printf("\t\tCAR SUCCESSFULLY BOOKED\nthe car details are:\nbooking name: %s\ncar name: Seltos\nfuel: petrol\ntype: SUV\nprice:₹ 9.95 lakhs\ncolour: %s\n",booking,colour);
         break;
         case 32:
         printf("\t\tCAR SUCCESSFULLY BOOKED\nthe car details are:\nbooking name: %s\ncar name: Sonet\nfuel: diesel\ntype: SUV\nprice:₹ 6.95 Lakhs\ncolour: %s\n",booking,colour);
         break;
         case 33:
         printf("\t\tCAR SUCCESSFULLY BOOKED\nthe car details are:\nbooking name: %s\ncar name: Carnival\nfuel: diesel\ntype: Minivan\nprice:₹ 25 lakhs\ncolour: %s\n",booking,colour);
         break;
         case 34:
         printf("\t\tCAR SUCCESSFULLY BOOKED\nthe car details are:\nbooking name: %s\ncar name: carens\nfuel: petrol\ntype: MUV\nprice:₹ 14.5 lakhs\ncolour: %s\n",booking,colour);
         break;
         case 35:
         printf("\t\tCAR SUCCESSFULLY BOOKED\nthe car details are:\nbooking name: %s\ncar name: sportage\nfuel: gasoline\ntype: SUV\nprice:₹ 25 lakhs\ncolour: %s\n",booking,colour);
         break;
         default:
         printf("Invalid booking id");
         break;
    }
en:return 0;
}
}
