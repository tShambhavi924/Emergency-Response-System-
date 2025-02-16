Emergency Response System

A C++ application for emergency response management that prioritizes incidents and optimizes resource allocation through real-time location tracking, traffic-aware routing, and intelligent dispatch coordination.

Features

- Priority-based incident handling (Fire, Medical, Crime, Other)
- Real-time location tracking & resource allocation
- Traffic-aware route optimization using OSRM API
- Intelligent dispatch coordination based on proximity & availability
- ETA calculations with traffic considerations
- Interactive Command-Line Interface for incident reporting

Prerequisites

- C++ Compiler (MinGW recommended for Windows)
- libcurl for making API requests
- nlohmann/json for parsing JSON responses
- Internet connection for OSRM API access

Installation (Windows)

1. Install Required Dependencies

1. Install MinGW-w64 (if not installed)
   - Download from MinGW-w64: https://winlibs.com/#download-release
   - Add MinGW bin path to the System Environment Variables

2. Install libcurl (Windows binaries)
   - Download from cURL official site: https://curl.se/windows/
   - Extract & copy libcurl.dll to the project folder

3. Install nlohmann/json
   - Download the JSON single-header file from nlohmann/json: https://github.com/nlohmann/json/releases
   - Place json.hpp in the project directory

2. Clone the Repository

git clone https://github.com/tShambhavi924/Emergency-Response-System-.git
cd Emergency-Response-System-

3. Build the Project

Run the following g++ command in the project directory:

g++ -o ers.exe main.cpp -I. -lcurl

- -I. ensures json.hpp is found
- -lcurl links the cURL library

4. Run the Application

ers.exe

Example Usage

Enter the place: Connaught Place
Enter Emergency:
1. Fire
2. Medical
3. Crime
4. Other
1
Enter the coordinates: 28.6300 77.2170

Emergency resources are dispatched based on priority & location!

Code Structure

- main.cpp – Core implementation
- json.hpp – JSON parser (nlohmann/json)
- libcurl.dll – Required for API requests

Troubleshooting (Windows)

- "g++ not recognized" → Add MinGW bin path to Environment Variables
- "libcurl.dll missing" → Place libcurl.dll in the project folder
- "json.hpp not found" → Ensure json.hpp is in the same directory

Contributing

1. Fork the repository
2. Create a feature branch (git checkout -b feature/NewFeature)
3. Commit changes (git commit -m "Added NewFeature")
4. Push to GitHub (git push origin feature/NewFeature)
5. Open a Pull Request

This project is designed to improve emergency response efficiency using C++ and real-time data. Feel free to contribute and enhance its capabilities!

