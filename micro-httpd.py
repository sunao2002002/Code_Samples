#!/usr/bin/env python3

import http.server
import socketserver

PORT = 8080

Handler = http.server.SimpleHTTPRequestHandler
httpd = socketserver.TCPServer(("0.0.0.0", PORT), Handler)
httpd.allow_reuse_address = True
print("Serving at port", PORT)
httpd.serve_forever()
