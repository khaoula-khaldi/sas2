    // kan9lb 3la aktar naw3;
           int  maxcount = 0; 
           char alot[20];
           for (int i = 0 ; i < nb_animal ; i++)
           {
               int count = 1;
               for (int j = i + 1; j < nb_animal ; j++)
               {
                   if (strcmp(A[i].espece , A[j].espece) == 0)
                   {
                       
                       count++;
                    
                   }
               }
               if (count > maxcount)
               {
                   maxcount = count;
                   strcpy(alot , A[i].espece);
               }
           }
           printf("le espèce le plu représentées : %s", alot);
           break;
        case '0': 
           break;
    }
}