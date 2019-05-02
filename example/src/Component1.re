let str = React.string;

module Styles = {
  open Css;

  let alert = style([width(`px(300))]);
};

[@react.component]
let make = () =>
  <React.Fragment>
    <Alert />
    <AutoComplete />
    <Avatar />
    <Badge />
  </React.Fragment>;