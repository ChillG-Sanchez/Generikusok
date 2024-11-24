using System;

namespace LibraryApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Library<string> library = new Library<string>();
            library.AddItem("Book 1");
            library.AddItem("Book 2");
            library.AddItem("Book 3");

            Console.WriteLine("Library contents:");
            foreach (var item in library.Search(x => true))
            {
                Console.WriteLine(item);
            }

            library.BorrowItem("Book 2");

            Console.WriteLine("Library contents after borrowing 'Book 2':");
            foreach (var item in library.Search(x => true))
            {
                Console.WriteLine(item);
            }

            library.ReturnItem("Book 2");

            Console.WriteLine("Library contents after returning 'Book 2':");
            foreach (var item in library.Search(x => true))
            {
                Console.WriteLine(item);
            }
        }
    }
}