using System;

namespace ShoppingCartApp
{
    class Program
    {
        static void Main(string[] args)
        {
            ShoppingCart<string> cart = new ShoppingCart<string>();
            cart.AddItem("Apple", 3);
            cart.AddItem("Banana", 2);
            cart.AddItem("Orange", 5);

            Console.WriteLine("Cart contents:");
            cart.PrintCart();

            Console.WriteLine("Total items: " + cart.GetTotalItems());

            cart.RemoveItem("Banana");

            Console.WriteLine("Cart contents after removing Banana:");
            cart.PrintCart();

            Console.WriteLine("Total items after removing Banana: " + cart.GetTotalItems());
        }
    }
}