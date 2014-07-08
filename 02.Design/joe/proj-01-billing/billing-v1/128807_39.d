format 74

pseudostatecanvas 128039 pseudostate_ref 128423 // initial
   xyz 56 100 2000
end
note 128167 "Bill Payment Status Diagram"
  xyzwh 45 24 2000 197 41
statecanvas 128295 state_ref 129063 // IC_Card Required
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 133 92 2000 123 37
end
statecanvas 128423 state_ref 129191 // IC_Card Punched
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 346 91 2000 121 37
end
statecanvas 128551 state_ref 129319 // Payment Request Sent
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 555 91 2000 151 37
end
statecanvas 128679 state_ref 129447 // Payment Result Get
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 564 172 2000 135 37
end
statecanvas 128807 state_ref 129575 // IC_Card Accepted
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 417 252 2000 125 37
end
statecanvas 128935 state_ref 129703 // IC_Card Rejected
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 572 380 2000 121 37
end
statecanvas 129063 state_ref 129831 // Payment Completed
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 257 323 2005 137 37
end
statecanvas 129191 state_ref 129959 // Payment Rejected
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 89 250 2000 125 37
end
pseudostatecanvas 129319 pseudostate_ref 128551 // final
   xyz 312 386 2000
end
pseudostatecanvas 129447 pseudostate_ref 128679 // choice
   xyz 619 252 2000
end
pseudostatecanvas 129575 pseudostate_ref 128807 // choice
   xyz 312 251 2000
end
transitioncanvas 129703 transition_ref 129063 // Ask for IC_Card
  
  from ref 128039 z 2001 label "Ask for IC_Card" xyz 70 80 2001 to ref 128295
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129831 transition_ref 129191 // Get IC_Card
  
  from ref 128295 z 2001 label "Get IC_Card" xyz 264 82 2001 to ref 128423
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129959 transition_ref 129319 // Send payment information
  
  from ref 128423 z 2001 label "Send payment information" xyz 437 70 2001 to ref 128551
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130087 transition_ref 129447 // Get payment result
  
  from ref 128551 z 2001 label "Get payment result" xyz 578 141 2001 to ref 128679
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130215 transition_ref 129575 // <transition>
  
  from ref 128679 z 2001 to ref 129447
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130343 transition_ref 129703 // Negative
  
  from ref 129447 z 2001 label "Negative" xyz 637 295 2001 to ref 128935
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130471 transition_ref 129831 // Positive
  
  from ref 129447 z 2001 label "Positive" xyz 570 253 2001 to ref 128807
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130599 transition_ref 129959 // Amount Balance Result
  
  from ref 128807 z 2001 label "Amount Balance Result" xyz 331 236 2001 to ref 129575
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130727 transition_ref 130087 // Positive
  
  from ref 129575 z 2006 label "Positive" xyz 329 292 2006 to ref 129063
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131111 transition_ref 130215 // <transition>
  
  from ref 129063 z 2006 to ref 129319
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131239 transition_ref 130343 // Negative
  
  from ref 129575 z 2001 label "Negative" xyz 256 248 2001 to ref 129191
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131367 transition_ref 130471 // <transition>
  
  from ref 128935 z 2001 to ref 129319
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131495 transition_ref 130599 // <transition>
  
  from ref 129191 z 2001 to point 149 396
  line 131623 z 2001 to ref 129319
  write_horizontally default show_definition default drawing_language default
end
end
