#pragma once
//*************************************************************************************************
//                                           Form principal
// Data: 14/05/2020
//*************************************************************************************************
#include "Modules.h"

namespace BaseProject 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::IO;
	using namespace System::Text;
	using namespace CommDevices;
	using namespace Modules;

	/// <summary>
	/// Sumário para MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	protected:
	private: System::Windows::Forms::TabControl^  tabCtrlApplication;
	private: System::Windows::Forms::TabPage^  tabModule;



	private: System::Windows::Forms::TextBox^  txtSendMessage;
	private: System::Windows::Forms::Button^  btnSendEcho;

	private: System::Windows::Forms::TextBox^  txtMessages;
	private: System::Windows::Forms::Button^  btnConnect;
	private: System::Windows::Forms::ComboBox^  cmboxSerialPorts;
	private: System::Windows::Forms::TabPage^  tabDAQ;
	private: System::Windows::Forms::TabPage^  tabADC;
	private: System::Windows::Forms::TabPage^  tabINA219;
	private: System::Windows::Forms::TabPage^  tabDistance;

	private: System::Windows::Forms::ToolStripStatusLabel^  stLabelConnection;
	private: System::Windows::Forms::Label^  lblEcho;
	private: System::Windows::Forms::Button^  btnGetSamples;
	private: System::Windows::Forms::Button^  btnLeitura;
	private: System::Windows::Forms::TabPage^  tabPWM;
	private: System::Windows::Forms::ComboBox^  cmboxDAQSelection;
	private: System::Windows::Forms::GroupBox^  gpbxDAQControl;
	private: System::Windows::Forms::TextBox^  txtSampleFreq;
	private: System::Windows::Forms::Label^  lblDAQSelection;
	private: System::Windows::Forms::Label^  lblSampleFreq;
	private: System::Windows::Forms::Label^  lblSampleAmount;

	private: System::Windows::Forms::TextBox^  txtSampleAmount;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chtSignal;
	private: System::Windows::Forms::ComboBox^  cmboxADCSelection;
	private: System::Windows::Forms::Label^  lblADCSelection;
	private: System::Windows::Forms::Label^  lblLeitura;
	private: System::Windows::Forms::Label^  lblAnalogReading;
	private: System::Windows::Forms::GroupBox^  gpbxPWMControl;
	private: System::Windows::Forms::Label^  lblDutyCycle;

	private: System::Windows::Forms::ComboBox^  cmboxPWMSelection;
	private: System::Windows::Forms::Label^  lblPWMSelection;
	private: System::Windows::Forms::TrackBar^  tcbarDutyCycle;



	private: System::Windows::Forms::Label^  lblPWMPinSelection;

	private: System::Windows::Forms::ComboBox^  cmboxPWMPinSelection;
	private: System::Windows::Forms::NumericUpDown^  updwDutyCycle;
	private: System::Windows::Forms::CheckBox^  ckboxPWMActivate;
	private: System::Windows::Forms::GroupBox^  gpbxHCSR04Control;
	private: System::Windows::Forms::Label^  lblLeituraHCSR04;
	private: System::Windows::Forms::Label^  lblDistHCSR04;
	private: System::Windows::Forms::Button^  btnLeituraHCSR04;
	private: System::Windows::Forms::GroupBox^  gpbxINA219Control;
	private: System::Windows::Forms::Label^  lblPower;
	private: System::Windows::Forms::Label^  lblPowerValue;
	private: System::Windows::Forms::Button^  btnPower;
	private: System::Windows::Forms::Label^  lblCurrent;
	private: System::Windows::Forms::Label^  lblCurrentValue;
	private: System::Windows::Forms::Button^  btnCurrent;
	private: System::Windows::Forms::Label^  lblVoltage;
	private: System::Windows::Forms::Label^  lblVoltageValue;
	private: System::Windows::Forms::Button^  btnVoltage;


















	protected:


	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->stLabelConnection = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->tabCtrlApplication = (gcnew System::Windows::Forms::TabControl());
			this->tabModule = (gcnew System::Windows::Forms::TabPage());
			this->lblEcho = (gcnew System::Windows::Forms::Label());
			this->txtSendMessage = (gcnew System::Windows::Forms::TextBox());
			this->btnSendEcho = (gcnew System::Windows::Forms::Button());
			this->txtMessages = (gcnew System::Windows::Forms::TextBox());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->cmboxSerialPorts = (gcnew System::Windows::Forms::ComboBox());
			this->tabDAQ = (gcnew System::Windows::Forms::TabPage());
			this->chtSignal = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->gpbxDAQControl = (gcnew System::Windows::Forms::GroupBox());
			this->cmboxDAQSelection = (gcnew System::Windows::Forms::ComboBox());
			this->btnGetSamples = (gcnew System::Windows::Forms::Button());
			this->txtSampleFreq = (gcnew System::Windows::Forms::TextBox());
			this->lblDAQSelection = (gcnew System::Windows::Forms::Label());
			this->lblSampleFreq = (gcnew System::Windows::Forms::Label());
			this->lblSampleAmount = (gcnew System::Windows::Forms::Label());
			this->txtSampleAmount = (gcnew System::Windows::Forms::TextBox());
			this->tabADC = (gcnew System::Windows::Forms::TabPage());
			this->lblLeitura = (gcnew System::Windows::Forms::Label());
			this->lblAnalogReading = (gcnew System::Windows::Forms::Label());
			this->cmboxADCSelection = (gcnew System::Windows::Forms::ComboBox());
			this->lblADCSelection = (gcnew System::Windows::Forms::Label());
			this->btnLeitura = (gcnew System::Windows::Forms::Button());
			this->tabPWM = (gcnew System::Windows::Forms::TabPage());
			this->gpbxPWMControl = (gcnew System::Windows::Forms::GroupBox());
			this->ckboxPWMActivate = (gcnew System::Windows::Forms::CheckBox());
			this->lblDutyCycle = (gcnew System::Windows::Forms::Label());
			this->cmboxPWMSelection = (gcnew System::Windows::Forms::ComboBox());
			this->lblPWMSelection = (gcnew System::Windows::Forms::Label());
			this->tcbarDutyCycle = (gcnew System::Windows::Forms::TrackBar());
			this->lblPWMPinSelection = (gcnew System::Windows::Forms::Label());
			this->cmboxPWMPinSelection = (gcnew System::Windows::Forms::ComboBox());
			this->updwDutyCycle = (gcnew System::Windows::Forms::NumericUpDown());
			this->tabINA219 = (gcnew System::Windows::Forms::TabPage());
			this->tabDistance = (gcnew System::Windows::Forms::TabPage());
			this->gpbxHCSR04Control = (gcnew System::Windows::Forms::GroupBox());
			this->lblLeituraHCSR04 = (gcnew System::Windows::Forms::Label());
			this->lblDistHCSR04 = (gcnew System::Windows::Forms::Label());
			this->btnLeituraHCSR04 = (gcnew System::Windows::Forms::Button());
			this->gpbxINA219Control = (gcnew System::Windows::Forms::GroupBox());
			this->lblVoltage = (gcnew System::Windows::Forms::Label());
			this->lblVoltageValue = (gcnew System::Windows::Forms::Label());
			this->btnVoltage = (gcnew System::Windows::Forms::Button());
			this->lblCurrent = (gcnew System::Windows::Forms::Label());
			this->lblCurrentValue = (gcnew System::Windows::Forms::Label());
			this->btnCurrent = (gcnew System::Windows::Forms::Button());
			this->lblPower = (gcnew System::Windows::Forms::Label());
			this->lblPowerValue = (gcnew System::Windows::Forms::Label());
			this->btnPower = (gcnew System::Windows::Forms::Button());
			this->statusStrip1->SuspendLayout();
			this->tabCtrlApplication->SuspendLayout();
			this->tabModule->SuspendLayout();
			this->tabDAQ->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chtSignal))->BeginInit();
			this->gpbxDAQControl->SuspendLayout();
			this->tabADC->SuspendLayout();
			this->tabPWM->SuspendLayout();
			this->gpbxPWMControl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tcbarDutyCycle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->updwDutyCycle))->BeginInit();
			this->tabINA219->SuspendLayout();
			this->tabDistance->SuspendLayout();
			this->gpbxHCSR04Control->SuspendLayout();
			this->gpbxINA219Control->SuspendLayout();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->stLabelConnection });
			this->statusStrip1->Location = System::Drawing::Point(0, 329);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(688, 22);
			this->statusStrip1->TabIndex = 15;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// stLabelConnection
			// 
			this->stLabelConnection->Name = L"stLabelConnection";
			this->stLabelConnection->Size = System::Drawing::Size(82, 17);
			this->stLabelConnection->Text = L"Desconectado";
			// 
			// tabCtrlApplication
			// 
			this->tabCtrlApplication->Controls->Add(this->tabModule);
			this->tabCtrlApplication->Controls->Add(this->tabDAQ);
			this->tabCtrlApplication->Controls->Add(this->tabADC);
			this->tabCtrlApplication->Controls->Add(this->tabPWM);
			this->tabCtrlApplication->Controls->Add(this->tabINA219);
			this->tabCtrlApplication->Controls->Add(this->tabDistance);
			this->tabCtrlApplication->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabCtrlApplication->Location = System::Drawing::Point(0, 0);
			this->tabCtrlApplication->Name = L"tabCtrlApplication";
			this->tabCtrlApplication->SelectedIndex = 0;
			this->tabCtrlApplication->Size = System::Drawing::Size(688, 329);
			this->tabCtrlApplication->TabIndex = 16;
			// 
			// tabModule
			// 
			this->tabModule->BackColor = System::Drawing::SystemColors::Control;
			this->tabModule->Controls->Add(this->lblEcho);
			this->tabModule->Controls->Add(this->txtSendMessage);
			this->tabModule->Controls->Add(this->btnSendEcho);
			this->tabModule->Controls->Add(this->txtMessages);
			this->tabModule->Controls->Add(this->btnConnect);
			this->tabModule->Controls->Add(this->cmboxSerialPorts);
			this->tabModule->Location = System::Drawing::Point(4, 22);
			this->tabModule->Name = L"tabModule";
			this->tabModule->Padding = System::Windows::Forms::Padding(3);
			this->tabModule->Size = System::Drawing::Size(680, 303);
			this->tabModule->TabIndex = 0;
			this->tabModule->Text = L"Módulo";
			// 
			// lblEcho
			// 
			this->lblEcho->AutoSize = true;
			this->lblEcho->Enabled = false;
			this->lblEcho->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEcho->Location = System::Drawing::Point(12, 38);
			this->lblEcho->Name = L"lblEcho";
			this->lblEcho->Size = System::Drawing::Size(78, 16);
			this->lblEcho->TabIndex = 22;
			this->lblEcho->Text = L"Ecoar texto:";
			// 
			// txtSendMessage
			// 
			this->txtSendMessage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtSendMessage->Enabled = false;
			this->txtSendMessage->Location = System::Drawing::Point(96, 36);
			this->txtSendMessage->Name = L"txtSendMessage";
			this->txtSendMessage->Size = System::Drawing::Size(495, 20);
			this->txtSendMessage->TabIndex = 19;
			// 
			// btnSendEcho
			// 
			this->btnSendEcho->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnSendEcho->Enabled = false;
			this->btnSendEcho->Location = System::Drawing::Point(597, 33);
			this->btnSendEcho->Name = L"btnSendEcho";
			this->btnSendEcho->Size = System::Drawing::Size(75, 23);
			this->btnSendEcho->TabIndex = 18;
			this->btnSendEcho->Text = L"Enviar";
			this->btnSendEcho->UseVisualStyleBackColor = true;
			this->btnSendEcho->Click += gcnew System::EventHandler(this, &MainForm::btnSendEcho_Click);
			// 
			// txtMessages
			// 
			this->txtMessages->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtMessages->Enabled = false;
			this->txtMessages->Location = System::Drawing::Point(15, 62);
			this->txtMessages->Multiline = true;
			this->txtMessages->Name = L"txtMessages";
			this->txtMessages->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtMessages->Size = System::Drawing::Size(657, 235);
			this->txtMessages->TabIndex = 17;
			// 
			// btnConnect
			// 
			this->btnConnect->Location = System::Drawing::Point(177, 9);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(85, 23);
			this->btnConnect->TabIndex = 16;
			this->btnConnect->Text = L"Conectar";
			this->btnConnect->UseVisualStyleBackColor = true;
			this->btnConnect->Click += gcnew System::EventHandler(this, &MainForm::btnConnect_Click);
			// 
			// cmboxSerialPorts
			// 
			this->cmboxSerialPorts->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmboxSerialPorts->FormattingEnabled = true;
			this->cmboxSerialPorts->Location = System::Drawing::Point(15, 9);
			this->cmboxSerialPorts->Name = L"cmboxSerialPorts";
			this->cmboxSerialPorts->Size = System::Drawing::Size(156, 21);
			this->cmboxSerialPorts->TabIndex = 15;
			this->cmboxSerialPorts->Click += gcnew System::EventHandler(this, &MainForm::cmboxSerialPorts_Click);
			// 
			// tabDAQ
			// 
			this->tabDAQ->BackColor = System::Drawing::SystemColors::Control;
			this->tabDAQ->Controls->Add(this->chtSignal);
			this->tabDAQ->Controls->Add(this->gpbxDAQControl);
			this->tabDAQ->Location = System::Drawing::Point(4, 22);
			this->tabDAQ->Name = L"tabDAQ";
			this->tabDAQ->Padding = System::Windows::Forms::Padding(3);
			this->tabDAQ->Size = System::Drawing::Size(680, 303);
			this->tabDAQ->TabIndex = 1;
			this->tabDAQ->Text = L"DAQ";
			// 
			// chtSignal
			// 
			this->chtSignal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->AxisX->Minimum = 0;
			chartArea1->AxisX->Title = L"Tempo (us)";
			chartArea1->AxisY->Maximum = 4;
			chartArea1->AxisY->Minimum = 0;
			chartArea1->AxisY->Title = L"Tensão (V)";
			chartArea1->Name = L"Signal1";
			this->chtSignal->ChartAreas->Add(chartArea1);
			this->chtSignal->Enabled = false;
			this->chtSignal->Location = System::Drawing::Point(3, 110);
			this->chtSignal->Name = L"chtSignal";
			series1->ChartArea = L"Signal1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->IsVisibleInLegend = false;
			series1->Name = L"Signal1";
			this->chtSignal->Series->Add(series1);
			this->chtSignal->Size = System::Drawing::Size(674, 190);
			this->chtSignal->TabIndex = 29;
			this->chtSignal->Text = L"chart1";
			// 
			// gpbxDAQControl
			// 
			this->gpbxDAQControl->Controls->Add(this->cmboxDAQSelection);
			this->gpbxDAQControl->Controls->Add(this->btnGetSamples);
			this->gpbxDAQControl->Controls->Add(this->txtSampleFreq);
			this->gpbxDAQControl->Controls->Add(this->lblDAQSelection);
			this->gpbxDAQControl->Controls->Add(this->lblSampleFreq);
			this->gpbxDAQControl->Controls->Add(this->lblSampleAmount);
			this->gpbxDAQControl->Controls->Add(this->txtSampleAmount);
			this->gpbxDAQControl->Dock = System::Windows::Forms::DockStyle::Top;
			this->gpbxDAQControl->Enabled = false;
			this->gpbxDAQControl->Location = System::Drawing::Point(3, 3);
			this->gpbxDAQControl->Name = L"gpbxDAQControl";
			this->gpbxDAQControl->Size = System::Drawing::Size(674, 101);
			this->gpbxDAQControl->TabIndex = 28;
			this->gpbxDAQControl->TabStop = false;
			this->gpbxDAQControl->Text = L"Controle de aquisição de dados";
			// 
			// cmboxDAQSelection
			// 
			this->cmboxDAQSelection->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmboxDAQSelection->FormattingEnabled = true;
			this->cmboxDAQSelection->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Canal 1", L"Canal 2", L"Canal 3", L"Canal 4" });
			this->cmboxDAQSelection->Location = System::Drawing::Point(217, 19);
			this->cmboxDAQSelection->Name = L"cmboxDAQSelection";
			this->cmboxDAQSelection->Size = System::Drawing::Size(69, 21);
			this->cmboxDAQSelection->TabIndex = 22;
			// 
			// btnGetSamples
			// 
			this->btnGetSamples->Location = System::Drawing::Point(335, 62);
			this->btnGetSamples->Name = L"btnGetSamples";
			this->btnGetSamples->Size = System::Drawing::Size(75, 23);
			this->btnGetSamples->TabIndex = 21;
			this->btnGetSamples->Text = L"Adquirir amostras";
			this->btnGetSamples->UseVisualStyleBackColor = true;
			this->btnGetSamples->Click += gcnew System::EventHandler(this, &MainForm::btnGetSamples_Click);
			// 
			// txtSampleFreq
			// 
			this->txtSampleFreq->Location = System::Drawing::Point(217, 65);
			this->txtSampleFreq->MaxLength = 6;
			this->txtSampleFreq->Name = L"txtSampleFreq";
			this->txtSampleFreq->Size = System::Drawing::Size(69, 20);
			this->txtSampleFreq->TabIndex = 27;
			this->txtSampleFreq->Text = L"500000";
			// 
			// lblDAQSelection
			// 
			this->lblDAQSelection->AutoSize = true;
			this->lblDAQSelection->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDAQSelection->Location = System::Drawing::Point(7, 22);
			this->lblDAQSelection->Name = L"lblDAQSelection";
			this->lblDAQSelection->Size = System::Drawing::Size(46, 16);
			this->lblDAQSelection->TabIndex = 23;
			this->lblDAQSelection->Text = L"Canal:";
			// 
			// lblSampleFreq
			// 
			this->lblSampleFreq->AutoSize = true;
			this->lblSampleFreq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSampleFreq->Location = System::Drawing::Point(7, 66);
			this->lblSampleFreq->Name = L"lblSampleFreq";
			this->lblSampleFreq->Size = System::Drawing::Size(204, 16);
			this->lblSampleFreq->TabIndex = 26;
			this->lblSampleFreq->Text = L"Frequência de amostragem (Hz):";
			// 
			// lblSampleAmount
			// 
			this->lblSampleAmount->AutoSize = true;
			this->lblSampleAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSampleAmount->Location = System::Drawing::Point(7, 44);
			this->lblSampleAmount->Name = L"lblSampleAmount";
			this->lblSampleAmount->Size = System::Drawing::Size(159, 16);
			this->lblSampleAmount->TabIndex = 24;
			this->lblSampleAmount->Text = L"Quantidade de amostras:";
			// 
			// txtSampleAmount
			// 
			this->txtSampleAmount->Location = System::Drawing::Point(217, 43);
			this->txtSampleAmount->MaxLength = 4;
			this->txtSampleAmount->Name = L"txtSampleAmount";
			this->txtSampleAmount->Size = System::Drawing::Size(69, 20);
			this->txtSampleAmount->TabIndex = 25;
			this->txtSampleAmount->Text = L"500";
			// 
			// tabADC
			// 
			this->tabADC->BackColor = System::Drawing::SystemColors::Control;
			this->tabADC->Controls->Add(this->lblLeitura);
			this->tabADC->Controls->Add(this->lblAnalogReading);
			this->tabADC->Controls->Add(this->cmboxADCSelection);
			this->tabADC->Controls->Add(this->lblADCSelection);
			this->tabADC->Controls->Add(this->btnLeitura);
			this->tabADC->Location = System::Drawing::Point(4, 22);
			this->tabADC->Name = L"tabADC";
			this->tabADC->Size = System::Drawing::Size(680, 303);
			this->tabADC->TabIndex = 2;
			this->tabADC->Text = L"Porta Analógica";
			// 
			// lblLeitura
			// 
			this->lblLeitura->AutoSize = true;
			this->lblLeitura->Enabled = false;
			this->lblLeitura->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLeitura->Location = System::Drawing::Point(3, 52);
			this->lblLeitura->Name = L"lblLeitura";
			this->lblLeitura->Size = System::Drawing::Size(247, 73);
			this->lblLeitura->TabIndex = 26;
			this->lblLeitura->Text = L"Leitura:";
			// 
			// lblAnalogReading
			// 
			this->lblAnalogReading->AutoSize = true;
			this->lblAnalogReading->Enabled = false;
			this->lblAnalogReading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAnalogReading->ForeColor = System::Drawing::Color::Red;
			this->lblAnalogReading->Location = System::Drawing::Point(256, 52);
			this->lblAnalogReading->Name = L"lblAnalogReading";
			this->lblAnalogReading->Size = System::Drawing::Size(128, 73);
			this->lblAnalogReading->TabIndex = 25;
			this->lblAnalogReading->Text = L"\? V";
			// 
			// cmboxADCSelection
			// 
			this->cmboxADCSelection->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmboxADCSelection->Enabled = false;
			this->cmboxADCSelection->FormattingEnabled = true;
			this->cmboxADCSelection->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"ADC 0", L"ADC 1", L"ADC 2", L"ADC 3",
					L"ADC 4", L"ADC 5", L"ADC 6", L"ADC 7", L"ADC 8", L"ADC 9", L"ADC 10"
			});
			this->cmboxADCSelection->Location = System::Drawing::Point(50, 6);
			this->cmboxADCSelection->Name = L"cmboxADCSelection";
			this->cmboxADCSelection->Size = System::Drawing::Size(89, 21);
			this->cmboxADCSelection->TabIndex = 24;
			// 
			// lblADCSelection
			// 
			this->lblADCSelection->AutoSize = true;
			this->lblADCSelection->Enabled = false;
			this->lblADCSelection->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblADCSelection->Location = System::Drawing::Point(8, 8);
			this->lblADCSelection->Name = L"lblADCSelection";
			this->lblADCSelection->Size = System::Drawing::Size(39, 16);
			this->lblADCSelection->TabIndex = 23;
			this->lblADCSelection->Text = L"ADC:";
			// 
			// btnLeitura
			// 
			this->btnLeitura->Enabled = false;
			this->btnLeitura->Location = System::Drawing::Point(145, 6);
			this->btnLeitura->Name = L"btnLeitura";
			this->btnLeitura->Size = System::Drawing::Size(90, 23);
			this->btnLeitura->TabIndex = 22;
			this->btnLeitura->Text = L"Obter valor";
			this->btnLeitura->UseVisualStyleBackColor = true;
			this->btnLeitura->Click += gcnew System::EventHandler(this, &MainForm::btnLeitura_Click);
			// 
			// tabPWM
			// 
			this->tabPWM->BackColor = System::Drawing::SystemColors::Control;
			this->tabPWM->Controls->Add(this->gpbxPWMControl);
			this->tabPWM->Location = System::Drawing::Point(4, 22);
			this->tabPWM->Name = L"tabPWM";
			this->tabPWM->Size = System::Drawing::Size(680, 303);
			this->tabPWM->TabIndex = 6;
			this->tabPWM->Text = L"PWM";
			// 
			// gpbxPWMControl
			// 
			this->gpbxPWMControl->Controls->Add(this->ckboxPWMActivate);
			this->gpbxPWMControl->Controls->Add(this->lblDutyCycle);
			this->gpbxPWMControl->Controls->Add(this->cmboxPWMSelection);
			this->gpbxPWMControl->Controls->Add(this->lblPWMSelection);
			this->gpbxPWMControl->Controls->Add(this->tcbarDutyCycle);
			this->gpbxPWMControl->Controls->Add(this->lblPWMPinSelection);
			this->gpbxPWMControl->Controls->Add(this->cmboxPWMPinSelection);
			this->gpbxPWMControl->Controls->Add(this->updwDutyCycle);
			this->gpbxPWMControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->gpbxPWMControl->Enabled = false;
			this->gpbxPWMControl->Location = System::Drawing::Point(0, 0);
			this->gpbxPWMControl->Name = L"gpbxPWMControl";
			this->gpbxPWMControl->Size = System::Drawing::Size(680, 303);
			this->gpbxPWMControl->TabIndex = 5;
			this->gpbxPWMControl->TabStop = false;
			this->gpbxPWMControl->Text = L"Controle de PWM";
			// 
			// ckboxPWMActivate
			// 
			this->ckboxPWMActivate->AutoSize = true;
			this->ckboxPWMActivate->Enabled = false;
			this->ckboxPWMActivate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ckboxPWMActivate->Location = System::Drawing::Point(233, 86);
			this->ckboxPWMActivate->Name = L"ckboxPWMActivate";
			this->ckboxPWMActivate->Size = System::Drawing::Size(61, 20);
			this->ckboxPWMActivate->TabIndex = 8;
			this->ckboxPWMActivate->Text = L"Ativar";
			this->ckboxPWMActivate->UseVisualStyleBackColor = true;
			this->ckboxPWMActivate->CheckedChanged += gcnew System::EventHandler(this, &MainForm::ckboxPWMActivate_CheckedChanged);
			// 
			// lblDutyCycle
			// 
			this->lblDutyCycle->AutoSize = true;
			this->lblDutyCycle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDutyCycle->ForeColor = System::Drawing::Color::DarkGreen;
			this->lblDutyCycle->Location = System::Drawing::Point(18, 87);
			this->lblDutyCycle->Name = L"lblDutyCycle";
			this->lblDutyCycle->Size = System::Drawing::Size(82, 16);
			this->lblDutyCycle->TabIndex = 7;
			this->lblDutyCycle->Text = L"Duty Cycle";
			// 
			// cmboxPWMSelection
			// 
			this->cmboxPWMSelection->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmboxPWMSelection->FormattingEnabled = true;
			this->cmboxPWMSelection->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"OC1", L"OC2", L"OC3", L"OC4", L"OC5",
					L"OC6", L"OC7", L"OC8", L"OC9"
			});
			this->cmboxPWMSelection->Location = System::Drawing::Point(106, 19);
			this->cmboxPWMSelection->Name = L"cmboxPWMSelection";
			this->cmboxPWMSelection->Size = System::Drawing::Size(121, 21);
			this->cmboxPWMSelection->TabIndex = 6;
			this->cmboxPWMSelection->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::cmboxPWMSelection_SelectedIndexChanged);
			// 
			// lblPWMSelection
			// 
			this->lblPWMSelection->AutoSize = true;
			this->lblPWMSelection->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPWMSelection->Location = System::Drawing::Point(8, 20);
			this->lblPWMSelection->Name = L"lblPWMSelection";
			this->lblPWMSelection->Size = System::Drawing::Size(44, 16);
			this->lblPWMSelection->TabIndex = 5;
			this->lblPWMSelection->Text = L"PWM:";
			// 
			// tcbarDutyCycle
			// 
			this->tcbarDutyCycle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tcbarDutyCycle->Location = System::Drawing::Point(3, 111);
			this->tcbarDutyCycle->Maximum = 100;
			this->tcbarDutyCycle->Name = L"tcbarDutyCycle";
			this->tcbarDutyCycle->Size = System::Drawing::Size(671, 45);
			this->tcbarDutyCycle->TabIndex = 4;
			this->tcbarDutyCycle->Scroll += gcnew System::EventHandler(this, &MainForm::tcbarDutyCycle_Scroll);
			// 
			// lblPWMPinSelection
			// 
			this->lblPWMPinSelection->AutoSize = true;
			this->lblPWMPinSelection->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblPWMPinSelection->Location = System::Drawing::Point(8, 47);
			this->lblPWMPinSelection->Name = L"lblPWMPinSelection";
			this->lblPWMPinSelection->Size = System::Drawing::Size(94, 16);
			this->lblPWMPinSelection->TabIndex = 0;
			this->lblPWMPinSelection->Text = L"Pino de saída:";
			// 
			// cmboxPWMPinSelection
			// 
			this->cmboxPWMPinSelection->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmboxPWMPinSelection->Enabled = false;
			this->cmboxPWMPinSelection->FormattingEnabled = true;
			this->cmboxPWMPinSelection->Location = System::Drawing::Point(106, 46);
			this->cmboxPWMPinSelection->Name = L"cmboxPWMPinSelection";
			this->cmboxPWMPinSelection->Size = System::Drawing::Size(121, 21);
			this->cmboxPWMPinSelection->TabIndex = 1;
			// 
			// updwDutyCycle
			// 
			this->updwDutyCycle->Location = System::Drawing::Point(106, 85);
			this->updwDutyCycle->Name = L"updwDutyCycle";
			this->updwDutyCycle->Size = System::Drawing::Size(121, 20);
			this->updwDutyCycle->TabIndex = 2;
			this->updwDutyCycle->ValueChanged += gcnew System::EventHandler(this, &MainForm::updwDutyCycle_ValueChanged);
			// 
			// tabINA219
			// 
			this->tabINA219->BackColor = System::Drawing::SystemColors::Control;
			this->tabINA219->Controls->Add(this->gpbxINA219Control);
			this->tabINA219->Location = System::Drawing::Point(4, 22);
			this->tabINA219->Name = L"tabINA219";
			this->tabINA219->Size = System::Drawing::Size(680, 303);
			this->tabINA219->TabIndex = 3;
			this->tabINA219->Text = L"Carga";
			// 
			// tabDistance
			// 
			this->tabDistance->BackColor = System::Drawing::SystemColors::Control;
			this->tabDistance->Controls->Add(this->gpbxHCSR04Control);
			this->tabDistance->Location = System::Drawing::Point(4, 22);
			this->tabDistance->Name = L"tabDistance";
			this->tabDistance->Size = System::Drawing::Size(680, 303);
			this->tabDistance->TabIndex = 4;
			this->tabDistance->Text = L"Distância";
			// 
			// gpbxHCSR04Control
			// 
			this->gpbxHCSR04Control->Controls->Add(this->lblLeituraHCSR04);
			this->gpbxHCSR04Control->Controls->Add(this->lblDistHCSR04);
			this->gpbxHCSR04Control->Controls->Add(this->btnLeituraHCSR04);
			this->gpbxHCSR04Control->Dock = System::Windows::Forms::DockStyle::Fill;
			this->gpbxHCSR04Control->Enabled = false;
			this->gpbxHCSR04Control->Location = System::Drawing::Point(0, 0);
			this->gpbxHCSR04Control->Name = L"gpbxHCSR04Control";
			this->gpbxHCSR04Control->Size = System::Drawing::Size(680, 303);
			this->gpbxHCSR04Control->TabIndex = 0;
			this->gpbxHCSR04Control->TabStop = false;
			this->gpbxHCSR04Control->Text = L"Leitura de sensores HCSR04";
			// 
			// lblLeituraHCSR04
			// 
			this->lblLeituraHCSR04->AutoSize = true;
			this->lblLeituraHCSR04->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLeituraHCSR04->Location = System::Drawing::Point(17, 68);
			this->lblLeituraHCSR04->Name = L"lblLeituraHCSR04";
			this->lblLeituraHCSR04->Size = System::Drawing::Size(247, 73);
			this->lblLeituraHCSR04->TabIndex = 29;
			this->lblLeituraHCSR04->Text = L"Leitura:";
			// 
			// lblDistHCSR04
			// 
			this->lblDistHCSR04->AutoSize = true;
			this->lblDistHCSR04->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDistHCSR04->ForeColor = System::Drawing::Color::Red;
			this->lblDistHCSR04->Location = System::Drawing::Point(270, 68);
			this->lblDistHCSR04->Name = L"lblDistHCSR04";
			this->lblDistHCSR04->Size = System::Drawing::Size(170, 73);
			this->lblDistHCSR04->TabIndex = 28;
			this->lblDistHCSR04->Text = L"\? cm";
			// 
			// btnLeituraHCSR04
			// 
			this->btnLeituraHCSR04->Location = System::Drawing::Point(30, 28);
			this->btnLeituraHCSR04->Name = L"btnLeituraHCSR04";
			this->btnLeituraHCSR04->Size = System::Drawing::Size(90, 23);
			this->btnLeituraHCSR04->TabIndex = 27;
			this->btnLeituraHCSR04->Text = L"Obter valor";
			this->btnLeituraHCSR04->UseVisualStyleBackColor = true;
			this->btnLeituraHCSR04->Click += gcnew System::EventHandler(this, &MainForm::btnLeituraHCSR04_Click);
			// 
			// gpbxINA219Control
			// 
			this->gpbxINA219Control->Controls->Add(this->lblPower);
			this->gpbxINA219Control->Controls->Add(this->lblPowerValue);
			this->gpbxINA219Control->Controls->Add(this->btnPower);
			this->gpbxINA219Control->Controls->Add(this->lblCurrent);
			this->gpbxINA219Control->Controls->Add(this->lblCurrentValue);
			this->gpbxINA219Control->Controls->Add(this->btnCurrent);
			this->gpbxINA219Control->Controls->Add(this->lblVoltage);
			this->gpbxINA219Control->Controls->Add(this->lblVoltageValue);
			this->gpbxINA219Control->Controls->Add(this->btnVoltage);
			this->gpbxINA219Control->Dock = System::Windows::Forms::DockStyle::Fill;
			this->gpbxINA219Control->Enabled = false;
			this->gpbxINA219Control->Location = System::Drawing::Point(0, 0);
			this->gpbxINA219Control->Name = L"gpbxINA219Control";
			this->gpbxINA219Control->Size = System::Drawing::Size(680, 303);
			this->gpbxINA219Control->TabIndex = 1;
			this->gpbxINA219Control->TabStop = false;
			this->gpbxINA219Control->Text = L"Leitura de sensores INA219";
			// 
			// lblVoltage
			// 
			this->lblVoltage->AutoSize = true;
			this->lblVoltage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVoltage->Location = System::Drawing::Point(102, 22);
			this->lblVoltage->Name = L"lblVoltage";
			this->lblVoltage->Size = System::Drawing::Size(58, 16);
			this->lblVoltage->TabIndex = 29;
			this->lblVoltage->Text = L"Tensão:";
			// 
			// lblVoltageValue
			// 
			this->lblVoltageValue->AutoSize = true;
			this->lblVoltageValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVoltageValue->ForeColor = System::Drawing::Color::Red;
			this->lblVoltageValue->Location = System::Drawing::Point(172, 22);
			this->lblVoltageValue->Name = L"lblVoltageValue";
			this->lblVoltageValue->Size = System::Drawing::Size(27, 16);
			this->lblVoltageValue->TabIndex = 28;
			this->lblVoltageValue->Text = L"\? V";
			// 
			// btnVoltage
			// 
			this->btnVoltage->Location = System::Drawing::Point(6, 19);
			this->btnVoltage->Name = L"btnVoltage";
			this->btnVoltage->Size = System::Drawing::Size(90, 23);
			this->btnVoltage->TabIndex = 27;
			this->btnVoltage->Text = L"Obter valor";
			this->btnVoltage->UseVisualStyleBackColor = true;
			this->btnVoltage->Click += gcnew System::EventHandler(this, &MainForm::btnVoltage_Click);
			// 
			// lblCurrent
			// 
			this->lblCurrent->AutoSize = true;
			this->lblCurrent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCurrent->Location = System::Drawing::Point(104, 51);
			this->lblCurrent->Name = L"lblCurrent";
			this->lblCurrent->Size = System::Drawing::Size(62, 16);
			this->lblCurrent->TabIndex = 32;
			this->lblCurrent->Text = L"Corrente:";
			// 
			// lblCurrentValue
			// 
			this->lblCurrentValue->AutoSize = true;
			this->lblCurrentValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCurrentValue->ForeColor = System::Drawing::Color::Red;
			this->lblCurrentValue->Location = System::Drawing::Point(172, 51);
			this->lblCurrentValue->Name = L"lblCurrentValue";
			this->lblCurrentValue->Size = System::Drawing::Size(27, 16);
			this->lblCurrentValue->TabIndex = 31;
			this->lblCurrentValue->Text = L"\? A";
			// 
			// btnCurrent
			// 
			this->btnCurrent->Location = System::Drawing::Point(8, 48);
			this->btnCurrent->Name = L"btnCurrent";
			this->btnCurrent->Size = System::Drawing::Size(90, 23);
			this->btnCurrent->TabIndex = 30;
			this->btnCurrent->Text = L"Obter valor";
			this->btnCurrent->UseVisualStyleBackColor = true;
			this->btnCurrent->Click += gcnew System::EventHandler(this, &MainForm::btnCurrent_Click);
			// 
			// lblPower
			// 
			this->lblPower->AutoSize = true;
			this->lblPower->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPower->Location = System::Drawing::Point(104, 80);
			this->lblPower->Name = L"lblPower";
			this->lblPower->Size = System::Drawing::Size(64, 16);
			this->lblPower->TabIndex = 35;
			this->lblPower->Text = L"Potência:";
			// 
			// lblPowerValue
			// 
			this->lblPowerValue->AutoSize = true;
			this->lblPowerValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPowerValue->ForeColor = System::Drawing::Color::Red;
			this->lblPowerValue->Location = System::Drawing::Point(174, 80);
			this->lblPowerValue->Name = L"lblPowerValue";
			this->lblPowerValue->Size = System::Drawing::Size(31, 16);
			this->lblPowerValue->TabIndex = 34;
			this->lblPowerValue->Text = L"\? W";
			// 
			// btnPower
			// 
			this->btnPower->Location = System::Drawing::Point(8, 77);
			this->btnPower->Name = L"btnPower";
			this->btnPower->Size = System::Drawing::Size(90, 23);
			this->btnPower->TabIndex = 33;
			this->btnPower->Text = L"Obter valor";
			this->btnPower->UseVisualStyleBackColor = true;
			this->btnPower->Click += gcnew System::EventHandler(this, &MainForm::btnPower_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(688, 351);
			this->Controls->Add(this->tabCtrlApplication);
			this->Controls->Add(this->statusStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->Text = L"Projeto básico para PIC32MZ";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainForm::MainForm_FormClosed);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->tabCtrlApplication->ResumeLayout(false);
			this->tabModule->ResumeLayout(false);
			this->tabModule->PerformLayout();
			this->tabDAQ->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chtSignal))->EndInit();
			this->gpbxDAQControl->ResumeLayout(false);
			this->gpbxDAQControl->PerformLayout();
			this->tabADC->ResumeLayout(false);
			this->tabADC->PerformLayout();
			this->tabPWM->ResumeLayout(false);
			this->gpbxPWMControl->ResumeLayout(false);
			this->gpbxPWMControl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tcbarDutyCycle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->updwDutyCycle))->EndInit();
			this->tabINA219->ResumeLayout(false);
			this->tabDistance->ResumeLayout(false);
			this->gpbxHCSR04Control->ResumeLayout(false);
			this->gpbxHCSR04Control->PerformLayout();
			this->gpbxINA219Control->ResumeLayout(false);
			this->gpbxINA219Control->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			Module ^device;

			System::Void cmboxSerialPorts_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				array<String ^> ^portNames = USBDevice::getUSBDevicesList();

				cmboxSerialPorts->Items->Clear();
				for each(String ^name in portNames)
					cmboxSerialPorts->Items->Add(name);
			}
			System::Void btnConnect_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				if (btnConnect->Text == "Conectar")
				{
					USBDevice ^virtualComm = gcnew USBDevice((String ^)cmboxSerialPorts->Items[cmboxSerialPorts->SelectedIndex]);
					device = gcnew Module(virtualComm);
					try
					{
						device->Open();
					}
					catch (UnauthorizedAccessException ^)
					{
						MessageBox::Show("Porta não pode ser aberta", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
						return;
					}
					catch (ArgumentException ^)
					{
						MessageBox::Show("Nome de porta inválido", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
						return;
					}
					catch (IOException ^)
					{
						MessageBox::Show("Porta encontra-se em estado inválido", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
						return;
					}
					catch (InvalidOperationException ^)
					{
						MessageBox::Show("Porta já está aberta", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
						return;
					}
					if (device->Connected)
					{
						btnConnect->Text = "Desconectar";
						stLabelConnection->Text = "Conectado";
						device->onReceive += gcnew ModuleReception(this, &MainForm::ReceptionHandler);
						device->onDisconnection += gcnew ModuleDisconnection(this, &MainForm::DisconnectionHandler);
						cmboxSerialPorts->Enabled = false;

						lblEcho->Enabled = true;
						txtSendMessage->Enabled = true;
						btnSendEcho->Enabled = true;
						txtMessages->Enabled = true;
						gpbxDAQControl->Enabled = true;
						chtSignal->Enabled = true;
						lblADCSelection->Enabled = true;
						cmboxADCSelection->Enabled = true;
						btnLeitura->Enabled = true;
						lblLeitura->Enabled = true;
						lblAnalogReading->Enabled = true;
						gpbxPWMControl->Enabled = true;
						gpbxPWMControl->Enabled = true;
						gpbxHCSR04Control->Enabled = true;
						gpbxINA219Control->Enabled = true;
					}
				}
				else
				{
					device->Close();
					device = nullptr;
					btnConnect->Text = "Conectar";
					stLabelConnection->Text = "Desconectado";
					cmboxSerialPorts->Enabled = true;

					lblEcho->Enabled = false;
					txtSendMessage->Enabled = false;
					btnSendEcho->Enabled = false;
					txtMessages->Enabled = false;
					gpbxDAQControl->Enabled = false;
					chtSignal->Enabled = false;
					lblADCSelection->Enabled = false;
					cmboxADCSelection->Enabled = false;
					btnLeitura->Enabled = false;
					lblLeitura->Enabled = false;
					lblAnalogReading->Enabled = false;
					gpbxPWMControl->Enabled = false;
					gpbxPWMControl->Enabled = false;
					gpbxHCSR04Control->Enabled = false;
					gpbxINA219Control->Enabled = false;
				}
			}
			System::Void ReceptionHandler(Object ^eqp, array<unsigned char>^buffer)
			{
				if (txtMessages->InvokeRequired)
				{
					array<Object^>^ myArgArray = { eqp, buffer };
					ModuleReception ^action = gcnew ModuleReception(this, &MainForm::ReceptionHandler);
					this->Invoke(action, myArgArray);
				}
				else
				{
					int tmpVal;
					float tmpFloat;
					float period;
					unsigned int command = BitConverter::ToUInt16(buffer, 0);

					switch (command)
					{
						case CMD_ECHO:
							txtMessages->Text += Encoding::ASCII->GetString(buffer, 2, buffer->Length - 2);
							break;
						case CMD_GET_SIGNAL:
							chtSignal->Series["Signal1"]->Points->Clear();
							period = Math::Abs(1000000.0f / Convert::ToDouble(txtSampleFreq->Text));
							for (unsigned int i = 0, pos = 2; pos < buffer->Length; pos += 2, i++)
							{
								tmpVal = BitConverter::ToUInt16(buffer, pos);
								tmpFloat = (3.22f / 4095) * tmpVal;
								chtSignal->Series["Signal1"]->Points->AddXY(i*period, tmpFloat);
							}
							break;
						case CMD_GET_ANALOG_VALUE:
							tmpVal = BitConverter::ToUInt16(buffer, 2);
							tmpFloat = Math::Round((3.22f / 4095) * tmpVal, 2);
							lblAnalogReading->Text = String::Format("{0} V", tmpFloat);
							break;
						case CMD_GET_VOLTAGE:
							tmpVal = BitConverter::ToUInt16(buffer, 2);
							tmpFloat = tmpVal * 0.001f;
							lblVoltageValue->Text = String::Format("{0}V", tmpFloat);
							break;
						case CMD_GET_CURRENT:
							tmpVal = BitConverter::ToUInt16(buffer, 2);
							tmpFloat = tmpVal * 0.001f;
							lblCurrentValue->Text = String::Format("{0}A", tmpFloat);
							break;
						case CMD_GET_POWER:
							tmpVal = BitConverter::ToUInt16(buffer, 2);
							tmpFloat = tmpVal * 0.001f;
							lblPowerValue->Text = String::Format("{0}W", tmpFloat);
							break;
						case CMD_GET_DISTANCE:
							tmpVal = BitConverter::ToUInt16(buffer, 2);
							lblDistHCSR04->Text = String::Format("{0}cm\r\n", tmpVal);
							break;
						case CMD_GET_WEIGHT:
							tmpVal = BitConverter::ToUInt32(buffer, 2);
							txtMessages->Text += String::Format("Peso: {0}\r\n", tmpVal);
							break;
						default:
							break;
					}
				}
			}
			System::Void DisconnectionHandler(Object ^eqp)
			{
				if (btnConnect->InvokeRequired)
				{
					array<Object^>^ myArgArray = { eqp };
					ModuleDisconnection ^action = gcnew ModuleDisconnection(this, &MainForm::DisconnectionHandler);
					this->Invoke(action, myArgArray);
				}
				else
				{
					btnConnect->Text = "Conectar";
					stLabelConnection->Text = "Desconectado";
					cmboxSerialPorts->Enabled = true;
					lblEcho->Enabled = false;
					txtSendMessage->Enabled = false;
					btnSendEcho->Enabled = false;
					txtMessages->Enabled = false;
					gpbxDAQControl->Enabled = false;
					chtSignal->Enabled = false;
					lblADCSelection->Enabled = false;
					cmboxADCSelection->Enabled = false;
					btnLeitura->Enabled = false;
					lblLeitura->Enabled = false;
					lblAnalogReading->Enabled = false;
					gpbxPWMControl->Enabled = false;
					gpbxPWMControl->Enabled = false;
					gpbxHCSR04Control->Enabled = false;
					gpbxINA219Control->Enabled = false;
				}
			}
			System::Void btnSendEcho_Click(System::Object^  sender, System::EventArgs^  e)
			{
				if (device->Connected)
				{
					array<unsigned char>^buffer = gcnew array<unsigned char>(txtSendMessage->Text->Length + 6);
					array<unsigned char>^message = Encoding::ASCII->GetBytes(txtSendMessage->Text);
					array<unsigned char>^ convertArray;

					buffer[0] = 0xAA;
					buffer[1] = 0x55;
					// Tamanho do campo de dados
					convertArray = BitConverter::GetBytes(txtSendMessage->Text->Length + 2);
					buffer[2] = convertArray[0];
					buffer[3] = convertArray[1];
					// Comando
					convertArray = BitConverter::GetBytes(CMD_ECHO);
					buffer[4] = convertArray[0];
					buffer[5] = convertArray[1];
					// Texto para envio
					for (int i = 0; i < message->Length; i++)
						buffer[6 + i] = message[i];

					try
					{
						device->Write(buffer, 0, buffer->Length);
					}
					catch (IOException ^)
					{
						MessageBox::Show("Mensagem não pôde ser enviada", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					}
				}
			}
			System::Void MainForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) 
			{
				device->Close();
				device = nullptr;
			}
			System::Void btnGetSamples_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				if (device->Connected && (cmboxDAQSelection->SelectedIndex != -1))
				{
					array<unsigned char>^buffer = gcnew array<unsigned char>(13);
					array<unsigned char>^ convertArray;

					buffer[0] = 0xAA;
					buffer[1] = 0x55;
					// Tamanho do campo de dados
					buffer[2] = 0x09;
					buffer[3] = 0x00;
					// Comando
					convertArray = BitConverter::GetBytes(CMD_GET_SIGNAL);
					buffer[4] = convertArray[0];
					buffer[5] = convertArray[1];
					// Canal
					buffer[6] = cmboxDAQSelection->SelectedIndex + 1;
					// Frequência de amostragem
					convertArray = BitConverter::GetBytes(Convert::ToUInt32(txtSampleFreq->Text));
					buffer[7] = convertArray[0];
					buffer[8] = convertArray[1];
					buffer[9] = convertArray[2];
					buffer[10] = convertArray[3];
					// Quantidade de amostras
					convertArray = BitConverter::GetBytes(Convert::ToUInt16(txtSampleAmount->Text));
					buffer[11] = convertArray[0];
					buffer[12] = convertArray[1];

					try
					{
						device->Write(buffer, 0, buffer->Length);
					}
					catch (IOException ^)
					{
						MessageBox::Show("Mensagem não pôde ser enviada", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					}
				}
			}
			System::Void btnLeitura_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				array<unsigned char>^buffer = gcnew array<unsigned char>(7);
				array<unsigned char>^ convertArray;

				if (cmboxADCSelection->SelectedIndex != -1)
				{
					buffer[0] = 0xAA;
					buffer[1] = 0x55;
					// Tamanho do campo de dados
					buffer[2] = 0x03;
					buffer[3] = 0x00;
					// Comando
					convertArray = BitConverter::GetBytes(CMD_GET_ANALOG_VALUE);
					buffer[4] = convertArray[0];
					buffer[5] = convertArray[1];
					// ADC
					buffer[6] = cmboxADCSelection->SelectedIndex;
					try
					{
						device->Write(buffer, 0, buffer->Length);
					}
					catch (IOException ^)
					{
						MessageBox::Show("Mensagem não pôde ser enviada", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					}
				}
			}
			System::Void cmboxPWMSelection_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
			{
				cmboxPWMPinSelection->SelectedIndex = -1;
				cmboxPWMPinSelection->Items->Clear();
				ckboxPWMActivate->Checked = false;
				updwDutyCycle->Value = 0;
				tcbarDutyCycle->Value = 0;
				switch (cmboxPWMSelection->SelectedIndex)
				{
					case 0:
					case 1:
					case 8:
						{
							array<int ^>^pins = gcnew array<int^>{IO_D1, IO_G9, IO_B14, IO_D0, IO_B6, IO_D5, IO_B2, IO_F3, IO_F13, IO_C2, IO_E8, IO_F2};
							for each(int pin in pins)
								cmboxPWMPinSelection->Items->Add(gcnew Pin(pin));
							cmboxPWMPinSelection->Enabled = true;
							ckboxPWMActivate->Enabled = true;
						}
						break;
					case 2:
					case 5:
						{
							array<int ^>^pins = gcnew array<int^>{IO_D2, IO_G8, IO_F4, IO_D10, IO_F1, IO_B9, IO_B10, IO_C14, IO_B5, IO_C1, IO_D14, IO_G1, IO_A14};
							for each(int pin in pins)
								cmboxPWMPinSelection->Items->Add(gcnew Pin(pin));
							cmboxPWMPinSelection->Enabled = true;
							ckboxPWMActivate->Enabled = true;
						}
						break;
					case 3:
					case 6:
						{
							array<int ^>^pins = gcnew array<int^>{IO_D3, IO_G7, IO_F5, IO_D11, IO_F0, IO_B1, IO_E5, IO_C13, IO_B3, IO_C4, IO_D15, IO_G0, IO_A15};
							for each(int pin in pins)
								cmboxPWMPinSelection->Items->Add(gcnew Pin(pin));
							cmboxPWMPinSelection->Enabled = true;
							ckboxPWMActivate->Enabled = true;
						}
						break;
					case 4:
					case 7:
						{
							array<int ^>^pins = gcnew array<int^>{IO_D9, IO_G6, IO_B8, IO_B15, IO_D4, IO_B0, IO_E3, IO_B7, IO_F12, IO_D12, IO_F8, IO_C3, IO_E9};
							for each(int pin in pins)
								cmboxPWMPinSelection->Items->Add(gcnew Pin(pin));
							cmboxPWMPinSelection->Enabled = true;
							ckboxPWMActivate->Enabled = true;
						}
						break;
					default:
						cmboxPWMPinSelection->Enabled = false;
						ckboxPWMActivate->Enabled = false;
						break;
				}
			}
			System::Void updwDutyCycle_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			{
				if (updwDutyCycle->Value != tcbarDutyCycle->Value)
					tcbarDutyCycle->Value = Convert::ToUInt32(updwDutyCycle->Value);
				sendPWMCommand();
			}
			System::Void tcbarDutyCycle_Scroll(System::Object^  sender, System::EventArgs^  e) 
			{
				if(updwDutyCycle->Value != tcbarDutyCycle->Value)
					updwDutyCycle->Value = tcbarDutyCycle->Value;
				sendPWMCommand();
			}
			System::Void ckboxPWMActivate_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
			{
				sendPWMCommand();
			}
			System::Void sendPWMCommand(void)
			{
				array<unsigned char>^buffer = gcnew array<unsigned char>(10);
				array<unsigned char>^ convertArray;
				Pin ^selectedPin;

				if (ckboxPWMActivate->Checked == true)
				{
					buffer[0] = 0xAA;
					buffer[1] = 0x55;
					// Tamanho do campo de dados
					buffer[2] = 0x06;
					buffer[3] = 0x00;
					// Comando
					convertArray = BitConverter::GetBytes(CMD_SET_PWM);
					buffer[4] = convertArray[0];
					buffer[5] = convertArray[1];
					// Qual OC
					buffer[6] = cmboxPWMSelection->SelectedIndex + 1;
					// Qual pino de saída
					selectedPin = (Pin ^)cmboxPWMPinSelection->SelectedItem;
					convertArray = BitConverter::GetBytes(selectedPin->ID);
					buffer[7] = convertArray[0];
					buffer[8] = convertArray[1];
					// Qual Duty Cicle
					buffer[9] = Convert::ToByte(tcbarDutyCycle->Value);
					try
					{
						device->Write(buffer, 0, buffer->Length);
					}
					catch (IOException ^)
					{
						MessageBox::Show("Mensagem não pôde ser enviada", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					}
				}
			}
			System::Void btnLeituraHCSR04_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				array<unsigned char>^buffer = gcnew array<unsigned char>(6);
				array<unsigned char>^ convertArray;

				buffer[0] = 0xAA;
				buffer[1] = 0x55;
				// Tamanho do campo de dados
				buffer[2] = 0x02;
				buffer[3] = 0x00;
				// Comando
				convertArray = BitConverter::GetBytes(CMD_GET_DISTANCE);
				buffer[4] = convertArray[0];
				buffer[5] = convertArray[1];
				try
				{
					device->Write(buffer, 0, buffer->Length);
				}
				catch (IOException ^)
				{
					MessageBox::Show("Mensagem não pôde ser enviada", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				}
			}
			private: System::Void btnVoltage_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				array<unsigned char>^buffer = gcnew array<unsigned char>(6);
				array<unsigned char>^ convertArray;

				buffer[0] = 0xAA;
				buffer[1] = 0x55;
				// Tamanho do campo de dados
				buffer[2] = 0x02;
				buffer[3] = 0x00;
				// Comando
				convertArray = BitConverter::GetBytes(CMD_GET_VOLTAGE);
				buffer[4] = convertArray[0];
				buffer[5] = convertArray[1];
				try
				{
					device->Write(buffer, 0, buffer->Length);
				}
				catch (IOException ^)
				{
					MessageBox::Show("Mensagem não pôde ser enviada", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				}
			}
			private: System::Void btnCurrent_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				array<unsigned char>^buffer = gcnew array<unsigned char>(6);
				array<unsigned char>^ convertArray;

				buffer[0] = 0xAA;
				buffer[1] = 0x55;
				// Tamanho do campo de dados
				buffer[2] = 0x02;
				buffer[3] = 0x00;
				// Comando
				convertArray = BitConverter::GetBytes(CMD_GET_CURRENT);
				buffer[4] = convertArray[0];
				buffer[5] = convertArray[1];
				try
				{
					device->Write(buffer, 0, buffer->Length);
				}
				catch (IOException ^)
				{
					MessageBox::Show("Mensagem não pôde ser enviada", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				}
			}
			private: System::Void btnPower_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				array<unsigned char>^buffer = gcnew array<unsigned char>(6);
				array<unsigned char>^ convertArray;

				buffer[0] = 0xAA;
				buffer[1] = 0x55;
				// Tamanho do campo de dados
				buffer[2] = 0x02;
				buffer[3] = 0x00;
				// Comando
				convertArray = BitConverter::GetBytes(CMD_GET_POWER);
				buffer[4] = convertArray[0];
				buffer[5] = convertArray[1];
				try
				{
					device->Write(buffer, 0, buffer->Length);
				}
				catch (IOException ^)
				{
					MessageBox::Show("Mensagem não pôde ser enviada", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				}
			}
};
}
