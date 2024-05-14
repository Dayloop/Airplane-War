#include "main_form.h"
#include <qresource.h>
#include "config.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Add resource when game launches
    QResource::registerResource(Resource_Path);




    Main_Form w;
    w.show();
    return a.exec();
}
