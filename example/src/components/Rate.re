open Antd;

let str = React.string;

[@react.component]
let make = () =>
  <Section name="Rate"> <Rate allowHalf=true defaultValue=2.5 /> </Section>;