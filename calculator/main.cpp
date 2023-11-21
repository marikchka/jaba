#include <QApplication>
#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>
#include <QString>

class CalculatorApp : public QMainWindow {
    Q_OBJECT

public:
    CalculatorApp(QWidget *parent = nullptr) : QMainWindow(parent) {
        setWindowTitle("Calculator");

        num1Input = new QLineEdit(this);
        num2Input = new QLineEdit(this);
        resultLabel = new QLabel(this);

        addButton = new QPushButton("+", this);
        subtractButton = new QPushButton("-", this);
        multiplyButton = new QPushButton("*", this);
        divideButton = new QPushButton("/", this);

        QGridLayout *layout = new QGridLayout;
        layout->addWidget(num1Input, 0, 0);
        layout->addWidget(num2Input, 0, 1);
        layout->addWidget(resultLabel, 1, 0, 1, 2);
        layout->addWidget(addButton, 2, 0);
        layout->addWidget(subtractButton, 2, 1);
        layout->addWidget(multiplyButton, 3, 0);
        layout->addWidget(divideButton, 3, 1);

        QWidget *centralWidget = new QWidget(this);
        centralWidget->setLayout(layout);
        setCentralWidget(centralWidget);

        connect(addButton, &QPushButton::clicked, this, &CalculatorApp::add);
        connect(subtractButton, &QPushButton::clicked, this, &CalculatorApp::subtract);
        connect(multiplyButton, &QPushButton::clicked, this, &CalculatorApp::multiply);
        connect(divideButton, &QPushButton::clicked, this, &CalculatorApp::divide);
    }

private slots:
    void add() {
        QString num1Str = num1Input->text();
        QString num2Str = num2Input->text();
        int num1 = num1Str.toInt();
        int num2 = num2Str.toInt();
        int result = num1 + num2;
        resultLabel->setText("Result: " + QString::number(result));
    }

    void subtract() {
        QString num1Str = num1Input->text();
        QString num2Str = num2Input->text();
        int num1 = num1Str.toInt();
        int num2 = num2Str.toInt();
        int result = num1 - num2;
        resultLabel->setText("Result: " + QString::number(result));
    }

    void multiply() {
        QString num1Str = num1Input->text();
        QString num2Str = num2Input->text();
        int num1 = num1Str.toInt();
        int num2 = num2Str.toInt();
        int result = num1 * num2;
        resultLabel->setText("Result: " + QString::number(result));
    }

    void divide() {
        QString num1Str = num1Input->text();
        QString num2Str = num2Input->text();

        double num1 = num1Str.toDouble();
        double num2 = num2Str.toDouble();

        if (num2 == 0) {
            resultLabel->setText("Error: Division by zero");
        } else {
            double result = num1 / num2;

            resultLabel->setText("Result: " + QString::number(result, 'f', 2));
        }
    }

private:
    QLineEdit *num1Input;
    QLineEdit *num2Input;
    QLabel *resultLabel;
    QPushButton *addButton;
    QPushButton *subtractButton;
    QPushButton *multiplyButton;
    QPushButton *divideButton;
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    CalculatorApp calculator;
    calculator.show();
    return app.exec();
}

#include "main.moc"

