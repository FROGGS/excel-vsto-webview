commit 5abadc998092b61ef5a1b7cb9398271017616bf5
- open Visual Studio 2019
- create new project
- search for VSTO
- select Excel-VSTP-Add-In
- name it excel-vsto-webview

commit 4f3f96b945fc8e40318acd312c4381f64d16e4b4
- add a Ribbon (XML) via insert new element
- add custom ribbon code (XML) to show button near File->Save As
- initialize ribbon in addin class

commit
- add a Windows Form via insert menu
- show form instead of message box in ribbon code (button click)
