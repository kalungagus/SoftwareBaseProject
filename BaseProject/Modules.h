//***************************************************************************************
//                                        Modules
//***************************************************************************************
#pragma once
#include "CommDevices.h"

//***************************************************************************************
// Definição de comandos utilizados pelos módulos
//***************************************************************************************
#define CMD_ECHO                0x8000
#define CMD_GET_SIGNAL          0x8001
#define CMD_GET_ANALOG_VALUE    0x8002
#define CMD_SET_PWM             0x8003
#define CMD_GET_VOLTAGE         0x8004
#define CMD_GET_CURRENT         0x8005
#define CMD_GET_POWER           0x8006
#define CMD_GET_DISTANCE        0x8007
#define CMD_GET_WEIGHT          0x8008

//***************************************************************************************
// ID de pinos do módulo
//***************************************************************************************
#define IO_A0                   0x0000
#define IO_A1                   0x0001
#define IO_A2                   0x0002
#define IO_A3                   0x0003
#define IO_A4                   0x0004
#define IO_A5                   0x0005
#define IO_A6                   0x0006
#define IO_A7                   0x0007
#define IO_A8                   0x0008
#define IO_A9                   0x0009
#define IO_A10                  0x000A
#define IO_A11                  0x000B
#define IO_A12                  0x000C
#define IO_A13                  0x000D
#define IO_A14                  0x000E
#define IO_A15                  0x000F

#define IO_B0                   0x0100
#define IO_B1                   0x0101
#define IO_B2                   0x0102
#define IO_B3                   0x0103
#define IO_B4                   0x0104
#define IO_B5                   0x0105
#define IO_B6                   0x0106
#define IO_B7                   0x0107
#define IO_B8                   0x0108
#define IO_B9                   0x0109
#define IO_B10                  0x010A
#define IO_B11                  0x010B
#define IO_B12                  0x010C
#define IO_B13                  0x010D
#define IO_B14                  0x010E
#define IO_B15                  0x010F

#define IO_C0                   0x0200
#define IO_C1                   0x0201
#define IO_C2                   0x0202
#define IO_C3                   0x0203
#define IO_C4                   0x0204
#define IO_C5                   0x0205
#define IO_C6                   0x0206
#define IO_C7                   0x0207
#define IO_C8                   0x0208
#define IO_C9                   0x0209
#define IO_C10                  0x020A
#define IO_C11                  0x020B
#define IO_C12                  0x020C
#define IO_C13                  0x020D
#define IO_C14                  0x020E
#define IO_C15                  0x020F

#define IO_D0                   0x0300
#define IO_D1                   0x0301
#define IO_D2                   0x0302
#define IO_D3                   0x0303
#define IO_D4                   0x0304
#define IO_D5                   0x0305
#define IO_D6                   0x0306
#define IO_D7                   0x0307
#define IO_D8                   0x0308
#define IO_D9                   0x0309
#define IO_D10                  0x030A
#define IO_D11                  0x030B
#define IO_D12                  0x030C
#define IO_D13                  0x030D
#define IO_D14                  0x030E
#define IO_D15                  0x030F

#define IO_E0                   0x0400
#define IO_E1                   0x0401
#define IO_E2                   0x0402
#define IO_E3                   0x0403
#define IO_E4                   0x0404
#define IO_E5                   0x0405
#define IO_E6                   0x0406
#define IO_E7                   0x0407
#define IO_E8                   0x0408
#define IO_E9                   0x0409
#define IO_E10                  0x040A
#define IO_E11                  0x040B
#define IO_E12                  0x040C
#define IO_E13                  0x040D
#define IO_E14                  0x040E
#define IO_E15                  0x040F

#define IO_F0                   0x0500
#define IO_F1                   0x0501
#define IO_F2                   0x0502
#define IO_F3                   0x0503
#define IO_F4                   0x0504
#define IO_F5                   0x0505
#define IO_F6                   0x0506
#define IO_F7                   0x0507
#define IO_F8                   0x0508
#define IO_F9                   0x0509
#define IO_F10                  0x050A
#define IO_F11                  0x050B
#define IO_F12                  0x050C
#define IO_F13                  0x050D
#define IO_F14                  0x050E
#define IO_F15                  0x050F

#define IO_G0                   0x0600
#define IO_G1                   0x0601
#define IO_G2                   0x0602
#define IO_G3                   0x0603
#define IO_G4                   0x0604
#define IO_G5                   0x0605
#define IO_G6                   0x0606
#define IO_G7                   0x0607
#define IO_G8                   0x0608
#define IO_G9                   0x0609
#define IO_G10                  0x060A
#define IO_G11                  0x060B
#define IO_G12                  0x060C
#define IO_G13                  0x060D
#define IO_G14                  0x060E
#define IO_G15                  0x060F

#define IO_UNDEFINED            0xFFFF

//***************************************************************************************
// Classes
//***************************************************************************************
namespace Modules
{
	using namespace System;
	using namespace System::IO;
	using namespace System::IO::Ports;
	using namespace System::Threading;
	using namespace System::Net;
	using namespace System::Net::Sockets;
	using namespace System::Windows::Forms;
	using namespace System::Collections::Generic;
	using namespace System::Text;
	using namespace CommDevices;

	//***********************************************************************************
	// Delegates
	//***********************************************************************************
	public delegate void ModuleReception(Object ^, array<unsigned char>^);
	public delegate void ModuleDisconnection(Object ^);

	//***********************************************************************************
	// Objects
	//***********************************************************************************
	public ref class Module
	{
		protected:
			Thread^ ReceptionThread;
			int rcvPos, rcvLimit;
			unsigned char chkSum;
			array<Byte>^ receptionBuffer;
			int dataPos = 0;
			int state = 0;

		public:
			CommLayer ^Comm;
			ModuleReception ^onReceive;
			ModuleDisconnection ^onDisconnection;

			//===========================================================================
			// Construtores
			//===========================================================================
			Module() { Comm = nullptr; rcvPos = 0; state = 0; };
			Module(CommLayer ^c) { Comm = c; rcvPos = 0; state = 0; };

			//===========================================================================
			// Propriedades
			//===========================================================================
			property bool Connected
			{
				bool get()
				{
					if (Object::ReferenceEquals(Comm, nullptr) == false)
						return(Comm->Connected);
					else
						return(false);
				}
				void set(bool state)
				{
					if (Object::ReferenceEquals(Comm, nullptr) == false)
						Comm->Connected = state;
				}
			}
			// Retorna a quantidade de dados no buffer de recepção
			property int BytesToRead
			{
				virtual int get(void) override
				{
					int bytes;
					try
					{
						bytes = Comm->BytesToRead;
					}
					catch (System::IO::IOException ^)
					{
						onDisconnection(this);
					}
					return(bytes);
				}
			}

			//===========================================================================
			// Métodos
			//===========================================================================
			void Open(void)
			{
				if (Object::ReferenceEquals(Comm, nullptr) == false)
				{
					Comm->Open();
					if (Comm->Connected)
					{
						this->ReceptionThread = gcnew Thread(gcnew ThreadStart(this, &Module::ReceptionService));
						this->ReceptionThread->Start();
					}
				}
			}
			void Close(void)
			{
				try
				{
					if (Object::ReferenceEquals(Comm, nullptr) == false)
					{
						Comm->Close();
						this->ReceptionThread->Join();
						delete(this->ReceptionThread);
						this->ReceptionThread = nullptr;
						delete(ReceptionThread);
						receptionBuffer = nullptr;
						delete(Comm);
						Comm = nullptr;
					}
				}
				catch (NullReferenceException ^) {}
			}
			// Escreve um array de caracteres no buffer de transmissão
			void Write(array<unsigned char>^ buffer, int offset, int size)
			{
				if (Object::ReferenceEquals(Comm, nullptr) == false)
					Comm->Write(buffer, offset, size);
			}
			// Lê dados presentes no buffer de recepção
			int Read(array<unsigned char>^ buffer, int offset, int size)
			{
				if (Object::ReferenceEquals(Comm, nullptr) == false)
					return (Comm->Read(buffer, offset, size));
				else
					return (0);
			}
			// Rotina de tratamento de recepção
			void ReceptionService(void)
			{
				int bytePos = 0, bytesToRead;
				array<unsigned char>^ header = gcnew array<Byte>(4);

				while (Comm->Connected)
				{
					try
					{
						if (Comm->BytesToRead)
						{
							Comm->Read(header, 0, header->Length);
							if (header[0] == 0xAA && header[1] == 0x55)
							{
								bytesToRead = BitConverter::ToUInt16(header, 2);
								if (Comm->BytesToRead >= bytesToRead)
								{
									receptionBuffer = gcnew array<Byte>(bytesToRead);
									Comm->Read(receptionBuffer, 0, receptionBuffer->Length);
									onReceive(this, receptionBuffer);
								}
							}
						}
					}
					catch (System::IO::IOException ^)
					{
						onDisconnection(this);
						continue;
					}
				}
				Thread::Sleep(100);
			}
	};

	public ref class Pin
	{
		protected:
			String ^name;
			int id;
		public:
			Pin(int i) 
			{ 
				array<unsigned char>^ convertArray;

				id = i;
				convertArray = BitConverter::GetBytes(i);
				switch (convertArray[1])
				{
					case 0x00:
						name = String::Format("RA{0}", convertArray[0]);
						break;
					case 0x01:
						name = String::Format("RB{0}", convertArray[0]);
						break;
					case 0x02:
						name = String::Format("RC{0}", convertArray[0]);
						break;
					case 0x03:
						name = String::Format("RD{0}", convertArray[0]);
						break;
					case 0x04:
						name = String::Format("RE{0}", convertArray[0]);
						break;
					case 0x05:
						name = String::Format("RF{0}", convertArray[0]);
						break;
					case 0x06:
						name = String::Format("RG{0}", convertArray[0]);
						break;
					default:
						break;
				}
			};
			property int ID
			{
				virtual int get(void) override
				{
					return(id);
				}
			}
			String ^ToString(void) override
			{
				return(name);
			}
	};
}