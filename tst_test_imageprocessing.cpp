#include <QString>
#include <QtTest/QtTest>

#include "modules/glcmbuilder.h"

using namespace cv;

class Test_ImageProcessing : public QObject, public GlcmBuilder
{
    Q_OBJECT

public:

    Test_ImageProcessing();

private Q_SLOTS:

    void test_func();

};

Test_ImageProcessing::Test_ImageProcessing()
{

}

void Test_ImageProcessing::test_func()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(Test_ImageProcessing)

#include "tst_test_glcmbuilder.moc"
