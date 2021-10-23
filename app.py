from flask import Flask, url_for, render_template
from Serialx import enviar

i = 0

app = Flask(__name__)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/boton1')
def boton1():
    global i
    if i < 9:
        i += 1
        enviar(i)
    return 'hello'

@app.route('/boton2')
def boton2():
    global i
    if i > 0:
        i -= 1
        enviar(i)
    return 'hello'

if __name__ == '__main__':
    app.run(host='10.10.1.8')