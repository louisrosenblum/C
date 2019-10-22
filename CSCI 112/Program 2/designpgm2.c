// second program of our assignment
// include masterlist.h
// main
// declare our variables - masterlist array
// fopen on output.bin with rb
// int number_of_items = fread(array of masterlist) 
//
// fclose binary file
// UserInterface(ml, number_of_items);
// return(0)
//
// void UserInterface(with masterlist array as input)
// while option is not X or x
// Ask user for option A, N, L or X
// switch option
// case 'A':
// case 'a': 
//   ask for more information
//   place that information at the end of the array by
//   calling addtomasterlist
//   break;
// case N:
//   ask for category
//   printcatnumber(masterlist,category) (for loop)
//   break;
// case L:
//   printlist(masterlist);
//   break;
// case X:
//   break;
// default:
//   print to stderr "illegal option"
// end while
// return;
//
// void addtomasterlist(masterlist array, information to add to array,
//          pointer to no_of_items_in_array)
//     add our new information to masterlist[no_of_items_in_array]
//     increment no_of_items_in_array
//
// void printcatnumber(masterlist, category, no_of_items)
//     int sum = 0
//     for loop with i from 0 to no_of_items
//         if given category matches category in masterlist[i]
//             increment sum
//
//
//     print "there are <x> items in the "
//     switch category
//     case C or c
//         print "Canned Goods"
//         break;
//     ... for the rest of the categories
//     default:
//         print to stderr "illiegal category"
//
//     print " category"
//     return;
//
//
//
