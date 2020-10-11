/*
 * Copyright (C) 2020  P Helion
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * QuickConversions is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main( int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    
    QGuiApplication app(argc, argv);
    app.setOrganizationName("quickconversions.phelion"); 
    // WARNING!!! OrganizationName MUST be the same as ApplicationName!!! 
    // If not, when deployed on Ubuntu Touch device, settings aren't saved
    app.setOrganizationDomain("nodomain.org");
    app.setApplicationName("quickconversions.phelion");
    
    QQmlApplicationEngine engine;
    engine.load( QUrl(QStringLiteral("qrc:/Main.qml")) );
    
    if (engine.rootObjects().isEmpty())
        return -1;
    
    return app.exec();
}
 
