#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <sstream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->b0, &QPushButton::clicked, [this]() {Insere('0');});
    connect(ui->b1, &QPushButton::clicked, [this]() {Insere('1');});
    connect(ui->b2, &QPushButton::clicked, [this]() {Insere('2');});
    connect(ui->b3, &QPushButton::clicked, [this]() {Insere('3');});
    connect(ui->b4, &QPushButton::clicked, [this]() {Insere('4');});
    connect(ui->b5, &QPushButton::clicked, [this]() {Insere('5');});
    connect(ui->b6, &QPushButton::clicked, [this]() {Insere('6');});
    connect(ui->b7, &QPushButton::clicked, [this]() {Insere('7');});
    connect(ui->b8, &QPushButton::clicked, [this]() {Insere('8');});
    connect(ui->b9, &QPushButton::clicked, [this]() {Insere('9');});
    connect(ui->bdelete, &QPushButton::clicked, [this]() {Deletar();});
    connect(ui->bcontinue, &QPushButton::clicked, [this]() {Calcula();});
    connect(ui->bmais, &QPushButton::clicked, [this]() {Operador('+');});
    connect(ui->bmenos, &QPushButton::clicked, [this]() {Operador('-');});
    connect(ui->bvezes, &QPushButton::clicked, [this]() {Operador('*');});
    connect(ui->bdiv, &QPushButton::clicked, [this]() {Operador('/');});
}

void MainWindow::Insere(char c)
{
    QString txt_atual = ui->resultado->text();
    ui->resultado->setText(txt_atual + c);
}

void MainWindow::Deletar()
{
    ui->resultado->clear();
}

void MainWindow::Calcula()
{
    QString expr = ui->resultado->text();
    string StdExpr = expr.toStdString();
    istringstream iss(StdExpr);
    string token;
    int  op = 0;
    double calculo = 0;

    while(iss >> token)
    {
        if(token == "+")
        {
            op = 1;
        }
        else if(token == "-")
        {
            op = 2;
        }
        else if(token == "*")
        {
            op = 3;
        }
        else if(token == "/")
        {
            op = 4;
        }
        else
        {
            if(op != 0)
            {
                switch(op)
                {
                case 1:
                    calculo += stod(token);
                break;

                case 2:
                    calculo -= stod(token);
                break;

                case 3:
                    calculo *= stod(token);
                break;

                default:
                    calculo /= stod(token);
                }
            }
            else
            {
                calculo += stod(token);
            }
        }
    }

    QString resultado_texto = QString::number(calculo);
    ui->resultado->setText(resultado_texto);
}

void MainWindow::Operador(char op)
{
    QString txt_atual = ui->resultado->text();
    ui->resultado->setText(txt_atual + " " + op + " ");
}

MainWindow::~MainWindow()
{

    delete ui;
}
