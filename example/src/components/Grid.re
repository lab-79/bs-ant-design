open Antd.Grid;

let str = React.string;

module Styles = {
  open Css;
  let main =
    style([
      height(`px(56)),
      textAlign(`center),
      color(white),
      display(`flex),
      alignItems(`center),
      justifyContent(`center),
      marginBottom(`px(15)),
    ]);
  let lightBlue = ReactDOMRe.Style.make(~backgroundColor="#52BEEC", ());
  let darkBlue = ReactDOMRe.Style.make(~backgroundColor="#08A3E4", ());
};

[@react.component]
let make = () =>
  <Section name="Grid">
    <Row>
      <Col className=Styles.main style=Styles.lightBlue span=12>
        {str("col-12")}
      </Col>
      <Col className=Styles.main style=Styles.darkBlue span=12>
        {str("col-12")}
      </Col>
    </Row>
    <Row>
      <Col className=Styles.main style=Styles.lightBlue span=8>
        {str("col-8")}
      </Col>
      <Col className=Styles.main style=Styles.darkBlue span=8>
        {str("col-8")}
      </Col>
      <Col className=Styles.main style=Styles.lightBlue span=8>
        {str("col-8")}
      </Col>
    </Row>
    <Row>
      <Col className=Styles.main style=Styles.lightBlue span=6>
        {str("col-6")}
      </Col>
      <Col className=Styles.main style=Styles.darkBlue span=6>
        {str("col-6")}
      </Col>
      <Col className=Styles.main style=Styles.lightBlue span=6>
        {str("col-6")}
      </Col>
      <Col className=Styles.main style=Styles.darkBlue span=6>
        {str("col-6")}
      </Col>
    </Row>
  </Section>;