#include <iostream>
using namespace std;

class Printer
{
public:

	Printer()
	{
		Manufacturer_ = nullptr;
		PrintTechnology_ = nullptr;
	};

	void AddPrinter(const char* ManufacturerValue, const char* PrintTechnologyValue)
	{
		Manufacturer_ = new char[strlen(ManufacturerValue) + 1];
		strcpy_s(Manufacturer_, strlen(ManufacturerValue) + 1, ManufacturerValue);
		PrintTechnology_ = new char[strlen(PrintTechnologyValue) + 1];
		strcpy_s(PrintTechnology_, strlen(PrintTechnologyValue) + 1, PrintTechnologyValue);
	}

	~Printer()
	{
		delete[] Manufacturer_;
		delete[] PrintTechnology_;
	};

	void Show()
	{
		if (this == nullptr)
			return;

		if (Manufacturer_ == nullptr || PrintTechnology_ == nullptr)
			return;

		std::cout << '\n' << "Printer" << '\n';

		std::cout << "Manufacturer: " << Manufacturer_ << '\n';
		std::cout << "Print Technology: " << PrintTechnology_ << '\n';
	}

private:
	char* Manufacturer_;
	char* PrintTechnology_;
};

class Mouse
{
public:

	void AddMouse(const char* ManufacturerValue, const char* ConnectionTypeValue, int SizeValue)
	{
		Manufacturer_ = new char[strlen(ManufacturerValue) + 1];
		strcpy_s(Manufacturer_, strlen(ManufacturerValue) + 1, ManufacturerValue);
		ConnectionType_ = new char[strlen(ConnectionTypeValue) + 1];
		strcpy_s(ConnectionType_, strlen(ConnectionTypeValue) + 1, ConnectionTypeValue);
		Size_ = SizeValue;
	};

	Mouse()
	{
		Manufacturer_ = nullptr;
		ConnectionType_ = nullptr;
		Size_ = 0;
	};

	~Mouse()
	{
		delete[] Manufacturer_;
		delete[] ConnectionType_;
	};

	void Show()
	{
		if (this == nullptr)
			return;

		if (Manufacturer_ == nullptr || ConnectionType_ == nullptr)
			return;

		std::cout << '\n' << "Mouse" << '\n';

		std::cout << "Manufacturer: " << Manufacturer_ << '\n';
		std::cout << "Connection Type: " << ConnectionType_ << '\n';
		std::cout << "Size: " << Size_ << '\n';
	}

private:
	char* Manufacturer_;
	char* ConnectionType_;
	int Size_;
};

class Cpu
{
public:

	Cpu()
	{
		cout << "Enter Manufacture" << '\n';
		char ManufacturerValue[20];
		cin >> ManufacturerValue;
		Manufacturer_ = new char[strlen(ManufacturerValue) + 1];
		strcpy_s(Manufacturer_, strlen(ManufacturerValue) + 1, ManufacturerValue);
		cout << "Enter Clock Rate" << '\n';
		int ClockRateValue;
		cin >> ClockRateValue;
		ClockRate_ = ClockRateValue;
		cout << "Enter Number Of Cores" << '\n';
		int NumberOfCoresValue;
		cin >> NumberOfCoresValue;
		NumberofCores_ = NumberOfCoresValue;
		cout << "Enter Multithreading" << '\n';
		int MultithreadingValue;
		cin >> MultithreadingValue;
		Multithreading_ = MultithreadingValue;
	};

	~Cpu()
	{
		delete[] Manufacturer_;
	};

	void Show()
	{
		if (Manufacturer_ == nullptr)
			return;

		std::cout << '\n' << "Cpu" << '\n';

		std::cout << "Manufacturer: " << Manufacturer_ << '\n';
		std::cout << "Clock Rate: " << ClockRate_ << '\n';
		std::cout << "Numbers of Cores: " << NumberofCores_ << '\n';
		std::cout << "Multithreading: " << Multithreading_ << '\n';
	}

private:
	char* Manufacturer_;
	int ClockRate_;
	int NumberofCores_;
	bool Multithreading_;
};

class Ram
{
public:

	Ram()
	{
		cout << "Enter Manufacture" << '\n';
		char ManufacturerValue[20];
		cin >> ManufacturerValue;
		Manufacturer_ = new char[strlen(ManufacturerValue) + 1];
		strcpy_s(Manufacturer_, strlen(ManufacturerValue) + 1, ManufacturerValue);
		cout << "Enter Connection Type" << '\n';
		char ConnectionTypeValue[20];
		cin >> ConnectionTypeValue;
		type_ = new char[strlen(ConnectionTypeValue) + 1];
		strcpy_s(type_, strlen(ConnectionTypeValue) + 1, ConnectionTypeValue);
		cout << "Enter Memory Value" << '\n';
		int MemoryValue;
		cin >> MemoryValue;
		Memory_ = MemoryValue;
		cout << "Enter Frequency Value" << '\n';
		int FrequencyValue;
		cin >> FrequencyValue;
		frequency_ = FrequencyValue;
	};

	~Ram()
	{
		delete[] Manufacturer_;
		delete[] type_;
	};
	
	void Show()
	{
		if (Manufacturer_ == nullptr || type_ == nullptr)
			return;

		std::cout << '\n' << "Ram" << '\n';

		std::cout << "Manufacturer: " << Manufacturer_ << '\n';
		std::cout << "Type: " << type_ << '\n';
		std::cout << "Memory: " << Memory_ << '\n';
		std::cout << "Frequency: " << frequency_ << '\n';
	}

private:
	char* Manufacturer_;
	char* type_;
	int Memory_;
	int frequency_;
};

class WebCamera
{
public:

	WebCamera()
	{
		Manufacturer_ = nullptr;
		Resolution_ = nullptr;
	};

	void AddWebCamera(const char* ManufacturerValue, const char* ResolutionValue)
	{
		Manufacturer_ = new char[strlen(ManufacturerValue) + 1];
		strcpy_s(Manufacturer_, strlen(ManufacturerValue) + 1, ManufacturerValue);
		Resolution_ = new char[strlen(ResolutionValue) + 1];
		strcpy_s(Resolution_, strlen(ResolutionValue) + 1, ResolutionValue);
	};

	~WebCamera()
	{
		delete[] Manufacturer_;
		delete[] Resolution_;
	};

	void Show()
	{
		if (this == nullptr)
			return;

		if (Manufacturer_ == nullptr || Resolution_ == nullptr)
			return;

		std::cout << '\n' << "WebCamera" << '\n';

		std::cout << "Manufacturer: " << Manufacturer_ << '\n';
		std::cout << "Resolution: " << Resolution_ << '\n';
	}

private:
	char* Manufacturer_;
	char* Resolution_;
};

class Keyboard
{
public:

	Keyboard()
	{
		Manufacturer_ = nullptr;
		ConnectionType_ = nullptr;
		KeyboardType_ = nullptr;
	}

	void AddKeyboard(const char* ManufacturerValue,const char* ConnectionTypeValue, const char* KeyboardTypeValue)
	{
		Manufacturer_ = new char[strlen(ManufacturerValue) + 1];
		strcpy_s(Manufacturer_, strlen(ManufacturerValue) + 1, ManufacturerValue);
		ConnectionType_ = new char[strlen(ConnectionTypeValue) + 1];
		strcpy_s(ConnectionType_, strlen(ConnectionTypeValue) + 1, ConnectionTypeValue);
		KeyboardType_ = new char[strlen(KeyboardTypeValue) + 1];
		strcpy_s(KeyboardType_, strlen(KeyboardTypeValue) + 1, KeyboardTypeValue);
	};

	~Keyboard()
	{
		delete[] Manufacturer_;
		delete[] ConnectionType_;
		delete[] KeyboardType_;
	};

	void Show()
	{
		if (this == nullptr)
			return;

		if (Manufacturer_ == nullptr || ConnectionType_ == nullptr || KeyboardType_ == nullptr)
			return;

		std::cout << '\n' << "Keyboard" << '\n';

		std::cout << "Manufacturer: " << Manufacturer_ << '\n';
		std::cout << "Connection Type: " << ConnectionType_ << '\n';
		std::cout << "Keyboard Type: " << KeyboardType_ << '\n';
	}

private:
	char* Manufacturer_;
	char* ConnectionType_;
	char* KeyboardType_;
};

class GraphicsCard
{
public:

	GraphicsCard()
	{
		cout << "Enter Manufacture" << '\n';
		char ManufacturerValue[20];
		cin >> ManufacturerValue;
		Manufacturer_ = new char[strlen(ManufacturerValue) + 1];
		strcpy_s(Manufacturer_, strlen(ManufacturerValue) + 1, ManufacturerValue);
		cout << "Enter Memory Amount" << '\n';
		int MemoryAmountValue;
		cin >> MemoryAmountValue;
		MemoryAmount_ = MemoryAmountValue;
	};

	~GraphicsCard()
	{
		delete[] Manufacturer_;
	};

	void Show()
	{
		if (Manufacturer_ == nullptr)
			return;

		std::cout << '\n' << "GraphicsCard" << '\n';

		std::cout << "Manufacturer: " << Manufacturer_ << '\n';
		std::cout << "Memory Amount: " << MemoryAmount_ << '\n';
	}

private:
	char* Manufacturer_;
	int MemoryAmount_;
};

class Laptop
{
	// Agregation 
	Printer* Printer_;
	Mouse* Mouse_;
	Keyboard* Keyboard_;
	WebCamera* WebCamera_;

	// Composition
	Cpu Cpu_;
	Ram Ram_;
	GraphicsCard GraphicsCard_;

public:
	Laptop(Printer* PrinterValue, Mouse* MouseValue, Keyboard* KeyboardValue, 
		WebCamera* WebCameraValue, Cpu CpuValue, Ram RamValue, GraphicsCard GraphicsCardValue)
		: Printer_(PrinterValue), Mouse_(MouseValue), Keyboard_(KeyboardValue), WebCamera_(WebCameraValue),
		Cpu_(CpuValue), Ram_(RamValue), GraphicsCard_(GraphicsCardValue)
	{

	};

	void AddPrinter(Printer* PrinterValue)
	{
		Printer_ = PrinterValue;
	}

	void AddMouse(Mouse* MouseValue)
	{
		Mouse_ = MouseValue;
	}

	void AddKeyboard(Keyboard* KeyboardValue)
	{
		Keyboard_ = KeyboardValue;
	}

	void AddWebCam(WebCamera* WebCameraValue)
	{
		WebCamera_ = WebCameraValue;
	}

	Laptop()
	{
		Printer_ = nullptr;
		Mouse_ = nullptr;
		Keyboard_ = nullptr;
		WebCamera_ = nullptr;
	}

	void Show()
	{
		Cpu_.Show();
		Ram_.Show();
		GraphicsCard_.Show();
		Printer_->Show();
		Mouse_->Show();
		Keyboard_->Show();
		WebCamera_->Show();
	}

	~Laptop()
	{

	};

private:

};



int main()
{
	Laptop temp;

	// Agregation Objects
	Printer tempPrinter;
	Mouse tempMouse;
	Keyboard tempKeyboard;
	WebCamera TempCam;
	while (1)
	{
		int UserChoice;
		cout << "1. Create a Printer" << endl;
		cout << "2. Create a Mouse" << endl;
		cout << "3. Create a Keyboard" << endl;
		cout << "4. Create a WebCamera" << endl;
		cout << "5. Show Accessories" << endl;
		cout << "6. Exit" << endl;
		cin >> UserChoice;
		system("cls");
		switch (UserChoice)
		{
		case 1:
		{
			cout << "Enter Manufacture" << '\n';
			char Manufacture[20];
			cin >> Manufacture;
			cout << "Enter Print Technology" << '\n';
			char PrintTechnology[20];
			cin >> PrintTechnology;
			tempPrinter.AddPrinter(Manufacture, PrintTechnology);
			temp.AddPrinter(&tempPrinter);
			break;
		}
		case 2:
		{
			cout << "Enter Manufacture" << '\n';
			char Manufacture[20];
			cin >> Manufacture;
			cout << "Enter Connection Type" << '\n';
			char ConnectionTypeValue[20];
			cin >> ConnectionTypeValue;
			cout << "Enter Size" << '\n';
			int SizeValue;
			cin >> SizeValue;
			tempMouse.AddMouse(Manufacture, ConnectionTypeValue, SizeValue);
			temp.AddMouse(&tempMouse);
			break;
		}
		case 3:
		{
			cout << "Enter Manufacture" << '\n';
			char ManufacturerValue[20];
			cin >> ManufacturerValue;
			cout << "Enter Connection Type" << '\n';
			char ConnectionTypeValue[20];
			cin >> ConnectionTypeValue;
			cout << "Enter Keyboard Type" << '\n';
			char KeyboardTypeValue[20];
			cin >> KeyboardTypeValue;
			tempKeyboard.AddKeyboard(ManufacturerValue,ConnectionTypeValue,KeyboardTypeValue);
			temp.AddKeyboard(&tempKeyboard);
			break;
		}
		case 4:
		{
			cout << "Enter Manufacture" << '\n';
			char ManufacturerValue[20];
			cin >> ManufacturerValue;
			cout << "Enter Resolution" << '\n';
			char ResolutionValue[20];
			cin >> ResolutionValue;
			TempCam.AddWebCamera(ManufacturerValue, ResolutionValue);
			temp.AddWebCam(&TempCam);
			break;
		}
		case 5:
		{
			temp.Show();
			break;
		}
		case 6:
		{
			return 0;
		}

		}
	}
}
