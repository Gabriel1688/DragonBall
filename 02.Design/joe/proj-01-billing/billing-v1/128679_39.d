format 74

classinstance 128039 class_ref 128039 // Client
  name ""   xyz 222 4 2000 life_line_z 2000
classinstance 128167 class_ref 128167 // Terminal
  name ""   xyz 364 4 2000 life_line_z 2000
note 128295 "Bill Amount Confirm Sequence Diagram"
  xyzwh 14 12 2000 145 61
durationcanvas 128679 classinstance_ref 128167 // :Terminal
  xyzwh 386 63 2010 11 83
  overlappingdurationcanvas 129575
    xyzwh 392 65 2020 11 76
  end
end
durationcanvas 128807 classinstance_ref 128039 // :Client
  xyzwh 236 62 2010 11 111
end
durationcanvas 129063 classinstance_ref 128167 // :Terminal
  xyzwh 386 155 2010 11 52
end
durationcanvas 129319 classinstance_ref 128039 // :Client
  xyzwh 236 190 2010 11 109
end
durationcanvas 129831 classinstance_ref 128167 // :Terminal
  xyzwh 386 287 2010 11 50
end
msg 128935 asynchronous
  from durationcanvas_ref 128679
  to durationcanvas_ref 128807
  yz 64 2015 explicitmsg "Require Amount Input"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 255 48
msg 129191 synchronous
  from durationcanvas_ref 128807
  to durationcanvas_ref 129063
  yz 155 2015 explicitmsg "Input Amount"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 279 139
msg 129447 synchronous
  from durationcanvas_ref 129063
  to durationcanvas_ref 129319
  yz 191 2015 explicitmsg "Ask for Amount Confirm"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 253 202
reflexivemsg 129703 asynchronous
  to durationcanvas_ref 129575
  yz 67 2025 explicitmsg "Waiting for amount input"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 435 67
msg 129959 asynchronous
  from durationcanvas_ref 129319
  to durationcanvas_ref 129831
  yz 288 2015 explicitmsg "Amount Confirm"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 269 297
end
