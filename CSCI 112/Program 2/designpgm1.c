// 2 programs
// masterlist data structure
//    item_name (char*), cost(int), aisle(int or char), cat(char)
//    masterlist.h
// program1
//   masterlist_t ml[100];
//   open text file - fopen("grocery.txt", "r");
//   int i=0 for counter;
//   while fgets(reading the line) != NULL
//       strcpy to create copy of line
//       parse line into structure
//           item_name = strtok - with token " "
//           cost = strtok - with token " "
//           aisle = strtok - with token " "
//           cat = strtok - with topen " "
//        build the database
//        by putting the items in the masterlist array
//        i++;
//   } end while
//   fopen("output.bin","wb");
//   fwrite(&ml, sizeof(masterlist_t), i, <fileptr>);
//   fclose(<fileptr>);
//   return(0);
