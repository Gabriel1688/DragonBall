format 74

note 128039 "Bill Payment Sequence Diagram"
  xyzwh 25 28 2000 143 59
classinstance 128167 class_ref 128039 // Client
  name ""   xyz 228 4 2000 life_line_z 2000
classinstance 128295 class_ref 128167 // Terminal
  name ""   xyz 427 8 2000 life_line_z 2000
classinstance 128423 class_ref 128295 // IC_Card
  name ""   xyz 326 5 2000 life_line_z 2000
durationcanvas 128807 classinstance_ref 128295 // :Terminal
  xyzwh 449 73 2010 11 29
end
durationcanvas 128935 classinstance_ref 128167 // :Client
  xyzwh 242 76 2010 11 62
end
durationcanvas 129191 classinstance_ref 128423 // :IC_Card
  xyzwh 347 123 2010 11 43
end
durationcanvas 129447 classinstance_ref 128295 // :Terminal
  xyzwh 449 152 2010 11 109
  overlappingdurationcanvas 129703
    xyzwh 455 191 2020 11 64
  end
end
durationcanvas 129959 classinstance_ref 128167 // :Client
  xyzwh 242 249 2010 11 38
end
msg 129063 asynchronous
  from durationcanvas_ref 128807
  to durationcanvas_ref 128935
  yz 76 2015 explicitmsg "Ask for IC_Card"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 307 60
msg 129319 asynchronous
  from durationcanvas_ref 128935
  to durationcanvas_ref 129191
  yz 123 2015 explicitmsg "Supply IC_Card"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 255 107
msg 129575 asynchronous
  from durationcanvas_ref 129191
  to durationcanvas_ref 129447
  yz 152 2015 explicitmsg "Card Punch"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 369 136
reflexivemsg 129831 asynchronous
  to durationcanvas_ref 129703
  yz 192 2025 explicitmsg "IC_Card Validity Verification & Balance Check"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 470 172
msg 130087 asynchronous
  from durationcanvas_ref 129447
  to durationcanvas_ref 129959
  yz 249 2025 explicitmsg "Display Payment Result"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 285 233
end
