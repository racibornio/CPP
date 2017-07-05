using System;

namespace CPP
{
	class MainClass
	{
		public static void Main(string[] args)
		{
			MainClass firstInstance = new MainClass();
			Console.WriteLine(firstInstance.NWD(800, 20));
			Console.WriteLine(firstInstance.kurde(800, 20));
			/*firstInstance.display();
			Console.WriteLine(firstInstance.CountSum(32, 5));
			int substraction = firstInstance.CountSubstract(43, 4);
			Console.WriteLine(substraction);
			firstInstance.tabliczkaMnozenia();
			Samochody fiat;
			fiat = new Samochody();
			fiat.przebieg = 10000;
			Console.WriteLine(fiat.przebieg.ToString());
			Console.WriteLine(fiat.rokProd.ToString());
			Console.WriteLine(fiat.color.ToString());
			//Console.WriteLine(fiat.moving.ToString());
			fiat.isMoving();
			fiat.Move();
			fiat.isMoving();
			fiat.Stop();
			fiat.isMoving();*/
			//firstInstance.Poteguj(2, -3);
			//Console.WriteLine(firstInstance.NWD(101, 97));
			//Console.WriteLine(firstInstance.Rekuruj(10));
			//int maxValue = firstInstance.WybierzMax(100, 30, 440);
			//Console.WriteLine(maxValue);
		}

		public void display()
		{
			Console.WriteLine("jfdsklajfkl");
		}

		public int CountSum(int a, int b)
		{
			return a + b;
		}

		public int CountSubstract(int a, int b)
		{
			return b - a;
		}

		public void tabliczkaMnozenia()
		{
			for (int i = 1; i <= 10; i++)
			{
				for (int j = 1; j <= 10; j++)
				{
					int iloczyn = i * j;
					Console.Write(((iloczyn < 100) ? " " : "") + ((iloczyn < 10) ? " " : "") + iloczyn + ((j < 10) ? " " : ""));
				}
				Console.WriteLine();
			}
		}

		public double Poteguj(int podstawa, int wykladnik)
		{

			if (wykladnik < 0)
			{
				int dodatniMinus = wykladnik - wykladnik - wykladnik;

				double jedynka = 1.0;
				double wynikUlamkowy = (jedynka / (podstawa * dodatniMinus));

				if (dodatniMinus == 1)
				{
					Console.WriteLine(podstawa + " do potegi " + wykladnik + " to " + wynikUlamkowy);
					return (jedynka / (podstawa * dodatniMinus));
				}
				else if (dodatniMinus == 2)
				{
					Console.WriteLine(podstawa + " do potegi " + wykladnik + " to " + wynikUlamkowy);
					return podstawa * podstawa;
				}
				else
				{
					int temp = podstawa * podstawa;
					int i = 2;
					while (i < dodatniMinus)
					{
						temp = temp * podstawa;
						i++;
					}
					Console.WriteLine(podstawa + " do potegi " + wykladnik + " to " + (jedynka / temp));
					return (jedynka / temp);
				}

			}
			else if (wykladnik == 0)
			{
				Console.WriteLine(podstawa + " do potegi " + wykladnik + " to 1.");
				return 1;
			} else if (wykladnik == 1)
			{
				Console.WriteLine(podstawa + " do potegi " + wykladnik + " to " + podstawa);
				return podstawa;
			} else
			{
				if (wykladnik == 2)
				{
					Console.WriteLine(podstawa + " do potegi " + wykladnik + " to " + podstawa * podstawa);
					return podstawa * podstawa;
				} else
				{
					int temp = podstawa * podstawa;
					int i = 2;
					while (i < wykladnik)
					{
						temp = temp * podstawa;
						i++;
					}
					Console.WriteLine(podstawa + " do potegi " + wykladnik + " to " + temp);
					return temp;
				}
			}
		}

		public int oldNWD(int a, int b)
		{
			int reszta;
			while (b != 0)
			{
				reszta = a % b;
				a = b;
				b = reszta;
				return a;
			}
			return 0;
		}

		public int Rekuruj(int liczba)
		{
			if (liczba == 0) return liczba;
			Console.WriteLine("teraz: " + liczba);
			return Rekuruj(liczba - 1);
		}

		public int WybierzMax(int a, int b, int c)
		{
			if (a <= 0 || b <=0 || c <= 0)
			{
				Console.WriteLine("Ujemne wartosci.");
				return 0;
			}
			else
			{
			if (a > b && a > c)
			{
				return a;
			}
			else if (b > a && b > c)
			{
				return b;
			}
			else
			{
				return c;
			}
		}

		}

		public int NWD(int wieksza, int mniejsza)
		{
			int roznica;

			while (wieksza != mniejsza)
			{
				roznica = wieksza - mniejsza;
				if (roznica < 0) roznica = -roznica;
				wieksza = mniejsza;
				mniejsza = roznica;
			}
			return wieksza;
		}

		public int kurde(int wieksza, int mniejsza)
		{
			int roznica;

			while (mniejsza != 0)
			{
				roznica = wieksza % mniejsza;
				wieksza = mniejsza;
				mniejsza = roznica;
			}
			return wieksza;
		}
	}
}