#include "mainwindow.h"

#include "./ui_mainwindow.h"

#include <math.h>

#include <Qvector>

#include "anotherwindow.h"



MainWindow::MainWindow(QWidget *parent)

    : QMainWindow(parent)

    , ui(new Ui::MainWindow)

{

    ui->setupUi(this);

    sWindow = new AnotherWindow();

    connect(sWindow, &AnotherWindow::firstWindow, this, &MainWindow::show);

    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::asd);

    connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWindow::zxcq);

    connect(ui->pushButton_5, &QPushButton::clicked, this, &MainWindow::zxcw);

}



MainWindow::~MainWindow()

{

    delete ui;

}



double qwee = 2.31;

double b0, b1, b2, b12, yy1, yy2, yy3, yy4, z12, z22, z32, z42, sd;

int y2, y3, y4;

double yuy = 0;

void MainWindow::asd(){

    double w1  = ui->spinBox->text().toDouble();

    double w2  = ui->spinBox_2->text().toDouble();

    double w3  = ui->spinBox_3->text().toDouble();

    double w4  = ui->spinBox_4->text().toDouble();

    double w5  = ui->spinBox_5->text().toDouble();

    double w6  = ui->spinBox_6->text().toDouble();

    double w7  = ui->spinBox_7->text().toDouble();

    double w8  = ui->spinBox_8->text().toDouble();

    double w9  = ui->spinBox_9->text().toDouble();

    double w10  = ui->spinBox_10->text().toDouble();

    double w11  = ui->spinBox_11->text().toDouble();

    double w12  = ui->spinBox_12->text().toDouble();

    double  ex1[40], ex2[40], ex3[40], ex4[40], l, b;

    int d = 3, d1 = 4;

    double sy1[40], sy2[40], sy3[40], sy4[40];

    double x0[40], x1[40], x2[40], x3[40], x4[40];

    double x00, x01, x02, x03;

    double x10, x11, x12, x13;

    double x20, x21, x22, x23;

    double x120, x121, x122, x123;

    double fgh, fgh1, fgh2, fgh3, fgh4, a;

    x00 = 1; x01 = 1; x02 = 1; x03 = 1;

    x10 = -1; x11 = 1; x12 = -1; x13 = 1;

    x20 = -1; x21 = -1; x22 = 1; x23 = 1;

    x120 = 1; x121 = -1; x122 = -1; x123 = 1;

    // double b0, b1, b2, b12;

    // double z12, z22, z32, z42;

    double da, z, x, c, v, sy;

    double yz1, yz2, yz3, yz4;

    double sbg, ddd;

    //    qwee = 2.31, qweee = 3.36;

    double t0, t1, t2, t12;

    ddd = d * d1;

    //double yy1, yy2, yy3, yy4;

    a = d1;

    double f1, f2, f, f18, f28, f38;

    int qwe123=0;

    //f2 = d1 * (d - 1);

    f18 = 5.32;

    f28 = 4.46;

    f38 = 4.07;

    int y1;

    y1 = 0;

    y2 = 0;

    y3 = 0;

    y4 = 0;



    ex1[0] = w1;

    ex1[1] = w2;

    ex1[2] = w3;

    ex2[0] = w4;

    ex2[1] = w5;

    ex2[2] = w6;

    ex3[0] = w7;

    ex3[1] = w8;

    ex3[2] = w9;

    ex4[0] = w10;

    ex4[1] = w11;

    ex4[2] = w12;



    for (int qwe = 0; qwe != d; qwe++) {

        y1 += ex1[qwe] ;



    }



    y1 = y1 / d;

    //  }

    //  for (int i = 0; i != d1; i++) {

    for (int qwe = 0; qwe != d; qwe++) {

        y2 = ex2[qwe] + y2;



    }

    y2 = y2 / d;

    //  }

    //  for (int i = 0; i != d1; i++) {

    for (int qwe = 0; qwe != d; qwe++) {

        y3 = ex3[qwe] + y3;



    }



    y3 = y3 / d;

    //  }

    //  for (int i = 0; i != d1; i++) {

    for (int qwe = 0; qwe != d; qwe++) {

        y4 = ex4[qwe] + y4;



    }



    y4 = y4 / d;



    //    q = i;

    //  }



    for (int i = 0; i != d; i++){



        x0[i] = ex1[i] - y1;

        x0[i] = x0[i] * x0[i];







    }

    for (int i = 0; i != d; i++){



        x1[i] = ex2[i] - y2;

        x1[i] = x1[i] * x1[i];







    }





    for (int i = 0; i != d; i++){



        x2[i] = ex3[i] - y3;

        x2[i] = x2[i] * x2[i];







    }







    for (int i = 0; i != d; i++){



        x4[i] = ex4[i] - y4;

        x4[i] = x4[i] * x4[i];







    }







    //for (int i = 0; i != d; i++){



    z12=x0[1]+x0[2]+x0[0];

    z22=x1[1]+x1[2]+x1[0];

    z32=x2[1]+x2[2]+x2[0];

    z42=x4[1]+x4[2]+x4[0];

    da=d-1;

    z12=z12/da;

    z22=z22/da;

    z32=z32/da;

    z42=z42/da;



    double ffffg = 0.76;

    QString pp23;

    double koh=std::max( z12,std::max(z22,std::max(z32,z42)) )/(z12+z22+z32+z42) ;
    if (koh<=ffffg){

        QString pp23 = "Подходит по критерию Кохрена ";
        ui->label_26->setText(pp23 + QString::number(koh));

    }
    else{

        QString pp23 = "Не прдходит по критерию Кохрона ";
        ui->label_26->setText(pp23 + QString::number(koh));
    }
    b0=x00*y1+x01*y2+x02*y3+x03*y4;
    b1=x10*y1+x11*y2+x12*y3+x13*y4;
    b2=x20*y1+x21*y2+x22*y3+x23*y4;
    b12=x120*y1+x121*y2+x122*y3+x123*y4;
    b0=b0/d1;
    b1=b1/d1;
    b2=b2/d1;
    b12=b12/d1;
    sy=z12+z22+z32+z42;
    sd = sy / d1;
    sbg = sd / ddd;
    sbg=sqrt(sbg);
    t0=b0 / sbg;
    t1=b1 / sbg;
    t2=b2 / sbg;
    t12=b12 / sbg;
    //<<b0<<endl<<b1<<endl<<b2<<endl<<b12;
    if(t0<qwee){b0=0;}
    if(t1<qwee){b1=0;}
    if(t2<qwee){b2=0;}
    if(t12<qwee){b12=0;}
    yy1= b0*x00+b1*x10+b2*x20+b12*x120;
    yy2= b0*x01+b1*x11+b2*x21+b12*x121;
    yy3= b0*x02+b1*x12+b2*x22+b12*x122;
    yy4= b0*x03+b1*x13+b2*x23+b12*x123;
    yuy=y1;
    // cout<<b0<<endl<<b1<<endl<<b2<<endl<<b12<<endl<<yy1<<endl<<yy2<<endl<<yy3<<endl<<yy4<<endl;
    fgh1=y1-yy1;
    fgh2=y2-yy2;
    fgh3=y3-yy3;
    fgh4=y4-yy4;
    fgh1=fgh1*fgh1;
    fgh2=fgh2*fgh2;
    fgh3=fgh3*fgh3;
    fgh4=fgh4*fgh4;
    fgh=fgh1+fgh2+fgh3+fgh4;
    if(b0==0){a=a-1;}
    if(b1==0){a=a-1;}
    if(b2==0){a=a-1;}
    if(b12==0){a=a-1;}
    if (a==3){qwe123=f18;}
    if (a==2){qwe123=f28;}
    if (a==1){qwe123=f38;}
    if (a==4){ui->label->setText("eror");}
    fgh=fgh/(d1-a);
    //f1=d1-a;

    if (fgh < sd) {
        QString abc = QString::number(fgh);
        QString zxs = " Всё верно(1 метод)";
        ui->label->setText(zxs);
        QString pp2 = "дисперсия воиспроизводимости - ";
        ui->label_21->setText(pp2 + QString::number(sd));
        QString pp3 = "дисперсия адекватности - ";
        ui->label_25->setText(pp3 + QString::number(fgh));


    }

    else {
        f = fgh / sd;
        if (f < qwe123) {
            QString abc = QString::number(fgh);
            QString zxs = " Всё верно!(2 метод)";
            ui->label->setText(zxs);
            QString pp5 = "критическое значение - ";
            ui->label_21->setText(pp5 + QString::number(qwe123));
            QString pp4 = "дисперсия адекватности < дисперсия воиспроизводимости - ";
            QString pp9=" < ";
            ui->label_21->setText(pp5 + QString::number(qwe123));
            ui->label_25->setText(pp4 + QString::number(fgh) + pp9 + QString::number(sd));}
        else {
            QString abc = QString::number(b0);
            QString asdqwe = QString::number(b1);
            QString asdzxc = QString::number(b2);
            QString asdasd = QString::number(b12);
            QString zxs = " неверно(2 метод)";
            ui->label->setText(zxs);
            QString pp7 = "критическое значение - ";
            ui->label_21->setText(pp7 + QString::number(qwe123));
            QString pp6 = "дисперсия адекватности > дисперсия воиспроизводимости - ";
            QString pp69 = " > ";
            ui->label_25->setText(pp6 + QString::number(fgh) + pp69 + QString::number(sd));}}
    ui->label_16->setText("Мат модель:");
    QString red = "y = ";

    if (b0!=0) {
        red += QString::number(b0);}
    if (b1!=0) {
        red += "+";
        red += QString::number(b1);
        red += "*X1";}
    if (b2!=0) {
        red += "+";
        red += QString::number(b2);
        red += "*X2";}
    if (b12!=0) {
        red += "+";
        red += QString::number(b12);
        red += "*X12";








    }
    ui->label_6->setText(red);


}

void MainWindow::zxcq(){

    QVector<double> arr_koef = {b0, b1, b2, b12};
    QVector<QVector<QString>> arr_symbols = {{"", "-", "-", "+"}, {"", "+", "-", "-"}, {"", "-", "+", "-"}, {"", "+", "+", "+"}};
    QString res = "";
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if (arr_koef[j] != 0) {
                if (res.size() == 0 && arr_symbols[i][j] == "+") {
                    res += "";
                }
                else {
                    res += arr_symbols[i][j];
                }
                res += QString::number(arr_koef[j]);
            }

        }

        if(i==0){
            res = "Ŷ1 = " + res + " = " + QString::number(yy1);
            ui->label_2->setText(res);
            res="";}
        if(i==1){
            res = "Ŷ2 = " + res + " = " + QString::number(yy2);
            ui->label_3->setText(res);
            res="";}
        if(i==2){
            res = "Ŷ3 = " + res + " = " + QString::number(yy3);
            ui->label_4->setText(res);
            res="";}
        if(i==3){
            res = "Ŷ4 = " + res + " = " + QString::number(yy4);
            ui->label_5->setText(res);
            res="";}
    }


    ui->label_17->setText("Функция отклика:"); ui->label_18->setText("Среднее значение:");

    QString sred = "y1 = ";
    sred += QString::number(yuy);
    ui->label_7->setText(sred);
    sred = "y2 = ";
    sred += QString::number(y2);
    ui->label_8->setText(sred);
    sred = "y3 = ";
    sred += QString::number(y3);
    ui->label_9->setText(sred);
    sred = "y4 = ";
    sred += QString::number(y4);
    ui->label_10->setText(sred);


} void MainWindow::zxcw(){

    ui->label_19->setText("x1 - фактор времени");

    ui->label_20->setText("x2 - фактор силы тока");

    ui->label_22->setText("1 метод - сравнение дисперсий");

    ui->label_24->setText("воспроизводимости и адекватности");

    ui->label_23->setText("2 метод - критерии Фишера"); }

void MainWindow::on_pushButton_7_clicked() {

    ui->label_25->setText("");

    ui->label_26->setText("");

    ui->label_19->setText("");

    ui->label_18->setText("");

    ui->label_17->setText("");

    ui->label_16->setText("");

    ui->label_10->setText("");

    ui->label_9->setText("");

    ui->label_8->setText("");

    ui->label_7->setText("");

    ui->label_6->setText("");

    ui->label_5->setText("");

    ui->label_4->setText("");

    ui->label_3->setText("");

    ui->label_2->setText("");

    ui->label->setText("");

    ui->label_20->setText("");

    ui->label_21->setText("");

    ui->spinBox->setValue(0);

    ui->spinBox_3->setValue(0);

    ui->spinBox_2->setValue(0);

    ui->spinBox_4->setValue(0);

    ui->spinBox_5->setValue(0);

    ui->spinBox_6->setValue(0);

    ui->spinBox_7->setValue(0);

    ui->spinBox_8->setValue(0);

    ui->spinBox_9->setValue(0);

    ui->spinBox_10->setValue(0);

    ui->spinBox_11->setValue(0);

    ui->spinBox_12->setValue(0); }











void MainWindow::on_pushButton_6_clicked() {

    sWindow->show(); // Показываем второе окно

    this->close(); // Закрываем основное окно
}
