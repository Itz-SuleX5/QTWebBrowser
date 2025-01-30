# QT Web Browser

A lightweight web browser built with Qt and QtWebEngine. This project demonstrates how to create a basic web browser with essential navigation features using Qt framework.

## Features

- Modern web rendering using QtWebEngine
- Navigation toolbar with back, forward, and reload buttons
- URL input bar with automatic URL formatting
- Clean and simple user interface
- Google as the default homepage

## Requirements

- Qt 5.15 or later
- QtWebEngine module
- C++ compiler with C++11 support
- Build tools (make, qmake)

## Build Instructions

1. Install the required dependencies:
```bash
sudo apt-get install qt5-default qtwebengine5-dev build-essential
```

2. Clone the repository:
```bash
git clone https://github.com/Itz-SuleX5/QTWebBrowser.git
cd QTWebBrowser
```

3. Build the project:
```bash
qmake
make
```

4. Run the browser:
```bash
./WebBrowser
```

## Project Structure

- `main.cpp`: Application entry point
- `mainwindow.h`: Main window class declaration
- `mainwindow.cpp`: Main window implementation
- `mainwindow.ui`: UI layout file
- `WebBrowser.pro`: Qt project file

## License

This project is open source and available under the MIT License.

## Contributing

Feel free to fork this project and submit pull requests with improvements or bug fixes. 