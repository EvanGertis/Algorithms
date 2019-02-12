using System;
using System.Runtime.InteropServices;

namespace SortedList{
    class Sorted{

            [System.Runtime.InteropServices.DllImportAttribute(@"proclib.dll", EntryPoint="main", CallingConvention=System.Runtime.InteropServices.CallingConvention.StdCall)]
            public static extern int main();
       
        static void Main(){

            Console.WriteLine("Running C program sorted_linked_list");
            main();
            // Keep the console window open in debug mode.
            Console.WriteLine("Press any key to exit.");
            Console.ReadKey();
        }
    }
}