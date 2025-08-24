<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="utf-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1" />
  <title>🌾 Farm Security System – README</title>
  <style>
    :root{
      --bg: #0b1020;
      --card: #111833;
      --text: #e8ecf6;
      --muted: #b7c0d9;
      --brand: #7ccf6b;
      --accent: #7bb0ff;
      --ring: rgba(123,176,255,0.35);
      --code: #0d1226;
      --code-border: #1b254d;
    }
    *{box-sizing:border-box}
    html,body{margin:0;background:radial-gradient(1200px 800px at 80% -10%, #14204a 0%, rgba(20,32,74,0) 60%), var(--bg);color:var(--text);font:16px/1.6 system-ui, -apple-system, Segoe UI, Roboto, "Helvetica Neue", Arial, "Noto Sans", "Apple Color Emoji","Segoe UI Emoji"}
    a{color:var(--accent);text-decoration:none}
    a:hover{text-decoration:underline}

    .container{max-width:980px;margin-inline:auto;padding:24px}

    header{display:flex;gap:16px;align-items:center;justify-content:space-between;flex-wrap:wrap;margin-bottom:18px}
    .title{display:flex;gap:12px;align-items:center}
    .logo{width:44px;height:44px;border-radius:12px;background:linear-gradient(135deg,var(--brand),var(--accent));display:grid;place-items:center;box-shadow:0 10px 30px rgba(123,176,255,.25)}
    .logo span{font-size:24px}

    .pill{padding:6px 12px;border:1px solid #2a366a;border-radius:999px;color:var(--muted);background:rgba(17,24,51,.5);backdrop-filter: blur(6px)}

    nav{display:flex;gap:10px;flex-wrap:wrap}
    nav a{padding:8px 12px;border-radius:10px;background:#0f1630;border:1px solid #1a2550;color:var(--muted)}
    nav a:hover{border-color:#31407d;color:#dbe4ff}

    .grid{display:grid;grid-template-columns:repeat(12,1fr);gap:16px}
    .card{grid-column:1/-1;background:var(--card);border:1px solid #1a2550;border-radius:18px;padding:20px;box-shadow:0 10px 30px rgba(0,0,0,.25)}
    @media(min-width:800px){.half{grid-column:span 6}}

    h1,h2,h3{line-height:1.2;margin:0 0 10px}
    h1{font-size:clamp(1.6rem,2.2vw+1rem,2.3rem)}
    h2{font-size:clamp(1.1rem,1.2vw+1rem,1.4rem);margin-top:8px}
    p{margin:8px 0}
    ul{margin:10px 0 0 20px}
    li{margin:4px 0}

    .kbd{font-family:ui-monospace, SFMono-Regular, Menlo, Monaco, Consolas, "Liberation Mono", "Courier New", monospace;font-size:.95rem}
    pre{margin:0;padding:14px 16px;background:var(--code);border:1px solid var(--code-border);border-radius:12px;overflow:auto}
    code{font-family:ui-monospace, SFMono-Regular, Menlo, Monaco, Consolas, "Liberation Mono", "Courier New", monospace}

    .tag{display:inline-flex;align-items:center;gap:6px;padding:6px 10px;border-radius:999px;background:#0e1736;border:1px solid #25326a;color:#c8d3ff;margin-right:6px}

    .footer{color:var(--muted);text-align:center;margin:26px 0 8px}

    .copybar{display:flex;justify-content:flex-end;margin-top:6px}
    .copybtn{font-size:.85rem;border:1px solid #2a366a;background:#0d1533;color:#cfe0ff;border-radius:8px;padding:6px 8px;cursor:pointer}
    .copybtn:hover{border-color:#4052a8;box-shadow:0 0 0 4px var(--ring)}
    .anchor{float:right;font-size:.9rem;color:#9fb4ff}
  </style>
</head>
<body>
  <div class="container">
    <header>
      <div class="title">
        <div class="logo" aria-hidden="true"><span>🌾</span></div>
        <div>
          <h1>Farm Security System</h1>
          <div class="pill">Arduino-based intrusion monitoring</div>
        </div>
      </div>
      <nav aria-label="Section navigation">
        <a href="#features">Features</a>
        <a href="#tech">Tech Stack</a>
        <a href="#structure">Repo</a>
        <a href="#getting-started">Setup</a>
        <a href="#demo">Presentation</a>
        <a href="#future">Future</a>
        <a href="#contributors">Contributors</a>
        <a href="#license">License</a>
      </nav>
    </header>

    <section class="grid">
      <article class="card" id="intro">
        <p>
          This project is a <strong>Farm Security System</strong> designed to help farmers protect their crops and land using affordable hardware and software. The system integrates Arduino-based sensors and logic to monitor the farm and provide alerts in case of intrusions or suspicious activities.
        </p>
      </article>

      <article class="card half" id="features">
        <h2>📌 Features <a class="anchor" href="#features">#</a></h2>
        <ul>
          <li>🚨 Intrusion detection using motion sensors</li>
          <li>🔊 Buzzer/alarm system for immediate alerts</li>
          <li>🌙 Works effectively during both day and night</li>
          <li>🔋 Low-cost and energy efficient design</li>
          <li>📡 Can be extended to include GSM/IoT modules for remote alerts</li>
        </ul>
      </article>

      <article class="card half" id="tech">
        <h2>🛠️ Tech Stack <a class="anchor" href="#tech">#</a></h2>
        <ul>
          <li><strong>Arduino</strong> (C/C++ via <code>.ino</code> sketch)</li>
          <li><strong>Hardware</strong>: Arduino board, PIR sensor, buzzer, LEDs, jumper wires, breadboard</li>
          <li><strong>Presentation</strong>: Keynote file included (<code>FARM SECURITY SYSTEM Final.key</code>)</li>
        </ul>
      </article>

      <article class="card" id="structure">
        <h2>📂 Repository Structure <a class="anchor" href="#structure">#</a></h2>
        <div class="copybar"><button class="copybtn" data-copy="tree">Copy tree</button></div>
        <pre id="tree" class="kbd">📁 Farm-Security-System
┣ 📄 README.md
┣ 📄 sketch_may6db.ino  # Arduino sketch code
┣ 📄 FARM SECURITY SYSTEM Final.key  # Project presentation
</pre>
      </article>

      <article class="card" id="getting-started">
        <h2>🚀 Getting Started <a class="anchor" href="#getting-started">#</a></h2>
        <h3>🔧 Hardware Setup</h3>
        <ol>
          <li>Connect the PIR motion sensor to the Arduino board:
            <ul>
              <li>VCC → 5V</li>
              <li>GND → GND</li>
              <li>OUT → Digital Pin (as specified in code)</li>
            </ul>
          </li>
          <li>Connect buzzer/LED for alert signals</li>
          <li>Upload the <code>.ino</code> file to your Arduino using Arduino IDE</li>
        </ol>

        <h3>💻 Software Setup</h3>
        <ol>
          <li>Install <a href="https://www.arduino.cc/en/software" target="_blank" rel="noopener">Arduino IDE</a></li>
          <li>Open <code>sketch_may6db.ino</code></li>
          <li>Select the correct board and port from <em>Tools → Board/Port</em></li>
          <li>Click <em>Upload</em></li>
        </ol>
      </article>

      <article class="card half" id="demo">
        <h2>📊 Demo &amp; Presentation <a class="anchor" href="#demo">#</a></h2>
        <p>The <strong>Keynote presentation</strong> (<code>FARM SECURITY SYSTEM Final.key</code>) explains the project concept, design, and working mechanism. Export it to PDF if you need to share with others.</p>
      </article>

      <article class="card half" id="future">
        <h2>🔮 Future Enhancements <a class="anchor" href="#future">#</a></h2>
        <ul>
          <li>📱 GSM module integration for SMS alerts</li>
          <li>☁️ IoT/Cloud monitoring with mobile app dashboard</li>
          <li>🔆 Solar-powered operation for remote farms</li>
        </ul>
      </article>

      <article class="card half" id="contributors">
        <h2>👩‍💻 Contributors <a class="anchor" href="#contributors">#</a></h2>
        <ul>
          <li><strong>Your Name</strong> – Developer &amp; Researcher</li>
        </ul>
      </article>

      <article class="card half" id="license">
        <h2>📜 License <a class="anchor" href="#license">#</a></h2>
        <p>This project is licensed under the <strong>MIT License</strong> – free to use, modify, and distribute.</p>
      </article>
    </section>

    <p class="footer">© Farm Security System • README web version</p>
  </div>

  <script>
    document.querySelectorAll('.copybtn').forEach(btn => {
      btn.addEventListener('click', () => {
        const id = btn.getAttribute('data-copy');
        const el = document.getElementById(id);
        const text = el ? el.innerText : '';
        navigator.clipboard.writeText(text).then(()=>{
          const original = btn.textContent;
          btn.textContent = 'Copied!';
          setTimeout(()=> btn.textContent = original, 1400);
        }).catch(()=>{
          alert('Copy failed.');
        });
      });
    });
  </script>
</body>
</html>
