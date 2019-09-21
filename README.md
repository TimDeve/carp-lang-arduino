# Carp Arduino

This repo is an example on how to use [carp-lang](https://github.com/carp-lang/Carp)
in conjunction with the Arduino framework on esp8266.

## Setup

You will need to have platformio installed as well as a secrets.carp file in
the root of the repo, it should look like this:

```clojure
(defmodule Secrets
  (defn wifi-ssid [] @"<your-wifi-ssid>")
  (defn wifi-pass [] @"<your-wifi-password>"))
```
