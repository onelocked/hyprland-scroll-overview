# Events

ScrollOverview emits two Lua events you can subscribe to with `hl.on`:

- `scrolloverview.opened` — an overview opened. Receives the monitor it opened on.
- `scrolloverview.closed` — an overview closed. Receives the monitor it was on.

```lua
hl.on("scrolloverview.opened", function(monitor)
  hl.notification("overview opened on " .. monitor.name, "info")
end)

hl.on("scrolloverview.closed", function(monitor)
  hl.notification("overview closed on " .. monitor.name, "info")
end)
```

A common use is toggling something (e.g. blur) while the overview is active:

```lua
local blur_enabled = true

hl.on("scrolloverview.opened", function()
  hl.config({ decoration = { blur = { enabled = false } } })
end)

hl.on("scrolloverview.closed", function()
  hl.config({ decoration = { blur = { enabled = blur_enabled } } })
end)
```
