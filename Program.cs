using System;
using System.Globalization;

namespace Algorithms
{
    class Funcionario
    {
        public int Id { get; private set; }
        public int Work_hours { get; private set; }
        public double Hour_payment { get; private set; }

        public Funcionario()
        {
        }

        public Funcionario(int id, int work_hours, double hour_payment)
        {
            Id = id;
            Work_hours = work_hours;
            Hour_payment = hour_payment;
        }

        public double CalcularSalario()
        {
            return Work_hours * Hour_payment;
        }

        public int IdReturn()
        {
            return Id;
        }
    }

    public class Program
    {
        static void Main(string[] args)
        {
            int x_id = 0, y_wh = 0;
            double z_payment = 0;

            x_id = int.Parse(Console.ReadLine());
            y_wh = int.Parse(Console.ReadLine());
            z_payment = double.Parse(Console.ReadLine());

            Funcionario func1 = new Funcionario(x_id, y_wh, z_payment);

            Console.WriteLine($"NUMBER = {func1.IdReturn()}");
            Console.WriteLine($"SALARY = U$ {func1.CalcularSalario().ToString("F2", CultureInfo.InvariantCulture)}");
        }
    }
}