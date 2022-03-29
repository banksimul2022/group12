
const db = require('../database');

const kortti = {
  getById: function(id, callback) {
    return db.query('select * from kortti where kortti_idkortti=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from kortti', callback);
  },
  add: function(kortti, callback) {
    return db.query(
      'insert into kortti (kortinnimi,PIN,Asiakas_idAsiakas,Tili_idTili) values(?,?)',
      [kortti.kortinnimi, kortti.pvm, kortti.asiakas_idasiakas, tili_idtili],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from kortti where kortti_idkortti=?', [id], callback);
  },
  update: function(idasiakas, kortti, callback) {
    return db.query(
      'update kortti set kortinnimi=?,pin=?,asiakas_idasiakas=?,tili_idtili=? where idasiakas=?',
      [kortti.kortinnimi, kortti.pin, kortti.asiakas_idasiakas, kortti.tili_idtili,idasiakas],
      callback
    );
  }
};
module.exports = kortti;