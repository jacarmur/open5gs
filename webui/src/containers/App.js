import { Component } from 'react';
import PropTypes from 'prop-types';
import { connect } from 'react-redux';
import { bindActionCreators, compose } from 'redux';

import * as sidebarActions from 'modules/sidebar';
import withWidth, { SMALL } from 'helpers/with-width';

import { Layout } from 'components';
import Notification from 'containers/Notification';
import * as Subscriber from 'containers/Subscriber';


class App extends Component {
  static propTypes = {
    session: PropTypes.object.isRequired,
    view: PropTypes.string.isRequired,
    width: PropTypes.number.isRequired
  }
  
  componentWillMount() {
    const { 
      width,
      SidebarActions
    } = this.props;

    if (width !== SMALL) {
      SidebarActions.setVisibility(true);
    }
  }

  render() {
    const {
      view
    } = this.props;

    if (view === "subscriber") {
      document.body.style.backgroundColor = "#e9ecef";
    } else {
      document.body.style.backgroundColor = "white";
    }

    return (
      <Layout>
        <Layout.Container visible={view === "subscriber"}>
          <Subscriber.Collection/>
        </Layout.Container>
        <Layout.Container visible={view === "pdn"}>
          <Layout.Content>{view}</Layout.Content>
        </Layout.Container>
        <Layout.Container visible={view === "user"}>
          <Layout.Content>{view}</Layout.Content>
        </Layout.Container>
        <Layout.Container visible={view === "test1"}>
          <Layout.Content>{view}</Layout.Content>
        </Layout.Container>
        <Layout.Container visible={view === "test3"}>
          <Layout.Content>{view}</Layout.Content>
        </Layout.Container>
        <Notification/>
      </Layout>
    )
  }
}

const enhance = compose(
  withWidth(),
  connect(
    (state) => ({
      view: state.sidebar.view
    }),
    (dispatch) => ({
      SidebarActions: bindActionCreators(sidebarActions, dispatch)
    })
  )
);

export default enhance(App);
