#include <QString>
#include <QtTest/QtTest>

#include "modules/glcmbuilder.h"

using namespace cv;

class Test_GlcmBuilder : public QObject, public GlcmBuilder
{
    Q_OBJECT

public:

    Test_GlcmBuilder();

private Q_SLOTS:

    void test_get_one_channel();

    void test_get_gray_magnitude();

    void test_calc_image_textures();

    void test_calc_texture_evalue();

    void test_calc_glcm();

    void test_normalize_mat();

    void test_calc_evalue();
};

Test_GlcmBuilder::Test_GlcmBuilder()
{

}

void Test_GlcmBuilder::test_get_one_channel()
{
    QVERIFY2(true, "Failure");
}

void Test_GlcmBuilder::test_get_gray_magnitude()
{
    QVERIFY2(true, "Failure");
}

void Test_GlcmBuilder::test_calc_image_textures()
{
    QVERIFY2(true, "Failure");
}

void Test_GlcmBuilder::test_calc_texture_evalue()
{
    QVERIFY2(true, "Failure");
}

void Test_GlcmBuilder::test_calc_glcm()
{
    QVERIFY2(true, "Failure");
}

void Test_GlcmBuilder::test_normalize_mat()
{
    QVERIFY2(true, "Failure");
}

void Test_GlcmBuilder::test_calc_evalue()
{
    QVERIFY2(true, "Failure");
}


QTEST_APPLESS_MAIN(Test_GlcmBuilder)

#include "tst_test_glcmbuilder.moc"
